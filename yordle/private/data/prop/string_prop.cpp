//
// Created by Lilith on 2021-06-09.
//

#include <yordle/data/prop/string_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    string_prop::string_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type      = prop_type::string;
        auto size = buffer.lpcast<uint16_t>(ptr);
        value     = std::string(reinterpret_cast<const char *>(buffer.data() + ptr), size);

        ptr += size;
    }

    void string_prop::to_json(nlohmann::json &json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key, bool store_type_info) const {
        if (!obj_key.has_value()) {
            obj_key = hash_list.get_string(key);
        }

        if (store_type_info) {
            if (value.has_value()) {
                json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", std::any_cast<std::string>(value)}};
            } else {
                json[obj_key.value()] = {{"type", prop_type_name[type]}, {"value", nullptr}};
            }
        } else {
            if (value.has_value()) {
                json[obj_key.value()] = std::any_cast<std::string>(value);
            } else {
                json[obj_key.value()] = nullptr;
            }
        }
    }
} // namespace yordle::data::prop
