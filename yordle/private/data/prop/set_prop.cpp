//
// Created by Lilith on 2021-06-09.
//

#include <set>
#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    set_prop::set_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type       = prop_type::set;
        value_type = buffer.lpcast<prop_type>(ptr);
        auto size  = buffer.lpcast<uint32_t>(ptr);
        auto count = buffer.cast<uint32_t>(ptr);

        auto ptr_shadow = ptr + 4;
        for (auto i = 0; i < count; ++i) {
            value.emplace(object_prop::read_prop(buffer, ptr_shadow, version, 0, value_type));
        }

        ptr += size;
    }

    void set_prop::to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hashes.get_fnvhash(key, cdtb::hashlist_target::prop_field);
        }

        nlohmann::json arr = json::array();
        for (const auto &entry : value) {
            nlohmann::json obj = json::object();
            entry->to_json(obj, hashes, {}, store_type_info);
            for (const auto &sub_value : obj) {
                arr.emplace_back(sub_value);
            }
        }

        if (store_type_info) {
            json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", arr}};
        } else {
            json[obj_key.value()] = arr;
        }
    }
} // namespace yordle::data::prop
