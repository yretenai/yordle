//
// Created by Lilith on 2021-06-09.
//

#include <set>

#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    structure_prop::structure_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type       = prop_type::structure;
        class_hash = buffer.lpcast<uint32_t>(ptr);
        if (class_hash == 0) {
            return;
        }

        auto size  = buffer.lpcast<uint32_t>(ptr);
        auto count = buffer.cast<uint16_t>(ptr);

        auto ptr_shadow = ptr + 2;
        for (auto i = 0; i < count; ++i) {
            auto prop             = object_prop::read_prop(buffer, ptr_shadow, version, {}, {});
            properties[prop->key] = prop;
        }

        ptr += size;
    }
    void structure_prop::to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hashes.get_fnvhash(key, cdtb::hashlist_target::prop_field);
        }

        nlohmann::json obj = nlohmann::json::object();
        obj["type"]        = hashes.get_fnvhash(class_hash, cdtb::hashlist_target::prop_type);

        nlohmann::json data_obj = nlohmann::json::object();
        for (const auto &property : properties) {
            property.second->to_json(data_obj, hashes, {}, store_type_info);
        }
        obj["data"] = data_obj;

        if (store_type_info) {
            json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", obj}};
        } else {
            json[obj_key.value()] = obj;
        }
    }
} // namespace yordle::data::prop
