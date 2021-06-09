//
// Created by Lilith on 2021-06-09.
//

#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/object_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    map_prop::map_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type = prop_type::map;

        key_type   = buffer.lpcast<prop_type>(&ptr);
        value_type = buffer.lpcast<prop_type>(&ptr);
        auto size  = buffer.lpcast<uint32_t>(&ptr);
        auto count = buffer.cast<uint32_t>(ptr);

        auto map_value  = map<shared_ptr<empty_prop>, shared_ptr<empty_prop>>();
        auto ptr_shadow = ptr + 4;
        for (auto i = 0; i < count; ++i) {
            auto key       = object_prop::read_prop(buffer, ptr_shadow, version, 0, key_type);
            auto value     = object_prop::read_prop(buffer, ptr_shadow, version, 0, value_type);
            map_value[key] = value;
        }
        value = map_value;

        ptr += size;
    }

    void map_prop::to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hash_list.get_string(key);
        }

        nlohmann::json arr = json::array();
        auto map_value     = std::any_cast<map<shared_ptr<empty_prop>, shared_ptr<empty_prop>>>(value);
        for (const auto &pair : map_value) {
            nlohmann::json obj = json::object();
            pair.first->to_json(obj, hash_list, file_hash_list, "key", store_type_info);
            pair.second->to_json(obj, hash_list, file_hash_list, "value", store_type_info);
            arr.emplace_back(obj);
        }

        if (store_type_info) {
            json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", arr}};
        } else {
            json[obj_key.value()] = arr;
        }
    }
} // namespace yordle::data::prop
