//
// Created by Lilith on 2021-06-09.
//

#include <yordle/data/prop/object_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    optional_prop::optional_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        type           = prop_type::optional;
        value_type     = buffer.lpcast<prop_type>(&ptr);
        auto has_value = buffer.lpcast<bool>(&ptr);

        if (has_value) {
            value = object_prop::read_prop(buffer, ptr, version, key_hash, value_type);
        }
    }

    void optional_prop::to_json(json &json, const cdtb::fnvhashlist &hash_list, const cdtb::xxhashlist &file_hash_list, std::optional<std::string> obj_key) const {
        if (value.has_value()) {
            any_cast<shared_ptr<empty_prop>>(value)->to_json(json, hash_list, file_hash_list, obj_key);
        } else {
            if (!obj_key.has_value()) {
                obj_key = hash_list.get_string(key);
            }

            json[obj_key.value()] = nullptr;
        }
    }
} // namespace yordle::data::prop
