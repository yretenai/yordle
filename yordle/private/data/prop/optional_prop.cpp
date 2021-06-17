//
// Created by Lilith on 2021-06-09.
//

#include <yordle/cdtb/hashlist_collection.hpp>
#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    optional_prop::optional_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type           = prop_type::optional;
        value_type     = buffer.lpcast<prop_type>(ptr);
        auto has_value = buffer.lpcast<bool>(ptr);

        if (has_value) {
            value = object_prop::read_prop(buffer, ptr, version, key_hash, value_type);
        }
    }

    void optional_prop::to_json(nlohmann::json &json, const yordle::cdtb::hashlist_collection &hashes, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hashes.get_fnvhash(key, cdtb::hashlist_target::prop_field);
        }

        if (value != nullptr) {
            if (store_type_info) {
                nlohmann::json obj = {{"type", prop_type_name[type]}};
                value->to_json(obj, hashes, "value", false);
                json[obj_key.value()] = obj;
            } else {
                value->to_json(json, hashes, obj_key, false);
            }
        } else {
            if (store_type_info) {
                json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", nullptr}};
            } else {
                json[obj_key.value()] = nullptr;
            }
        }
    }
} // namespace yordle::data::prop
