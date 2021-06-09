//
// Created by Lilith on 2021-06-09.
//

#include <set>

#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    structure_prop::structure_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type       = prop_type::structure;
        class_hash = buffer.lpcast<uint32_t>(&ptr);
        if (class_hash == 0) {
            value = {};
            return;
        }

        auto size  = buffer.lpcast<uint32_t>(&ptr);
        auto count = buffer.cast<uint16_t>(ptr);

        auto ptr_shadow = ptr + 2;
        auto props      = set<shared_ptr<empty_prop>>();
        for (auto i = 0; i < count; ++i) {
            props.emplace(object_prop::read_prop(buffer, ptr_shadow, version, {}, {}));
        }
        value = props;

        ptr += size;
    }
    void structure_prop::to_json(json &json, const cdtb::fnvhashlist &hash_list, const cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key) const {
        if (!obj_key.has_value()) {
            obj_key = hash_list.get_string(key);
        }

        nlohmann::json obj;
        obj["type"] = hash_list.get_string(class_hash);

        if (!value.has_value()) {
            obj["data"] = nullptr;

            json[obj_key.value()] = obj;
            return;
        }

        auto properties = std::any_cast<set<shared_ptr<empty_prop>>>(value);

        nlohmann::json data_obj;
        for (const auto &property : properties) {
            property->to_json(data_obj, hash_list, file_hash_list, {});
        }
        obj["data"] = data_obj;

        json[obj_key.value()] = obj;
    }
} // namespace yordle::data::prop
