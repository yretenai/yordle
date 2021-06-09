//
// Created by Lilith on 2021-06-09.
//

#include <yordle/data/prop/string_prop.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data::prop {
    string_prop::string_prop(Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : empty_prop(buffer, ptr, version, key_hash) {
        auto sz = buffer.lpcast<uint16_t>(&ptr);
        value   = std::string(reinterpret_cast<const char *>(buffer.data() + ptr), sz);
        ptr += sz;
    }

    void string_prop::to_json(json json, const yordle::cdtb::fnvhashlist &hash_list, const yordle::cdtb::xxhashlist &file_hash_list) const {
        if (value.has_value()) {
            json[hash_list.get_string(key)] = std::any_cast<std::string>(value);
        } else {
            json[hash_list.get_string(key)] = nullptr;
        }
    }
} // namespace yordle::data::prop
