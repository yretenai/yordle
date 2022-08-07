//
// Created by Naomi on 2021-06-17.
//

#include <yordle/data/rst_file_v2.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data {
    rst_file_v2::rst_file_v2(Array<uint8_t> &buffer) {
        uintptr_t offset = 0;

        fourcc = buffer.lpcast<rst_version>(offset);
        if (buffer.lpcast<bool>(offset)) {
            auto size = buffer.lpcast<uint32_t>(offset);
            config    = std::string(reinterpret_cast<const char *>(buffer.data() + offset), static_cast<std::string::size_type>(size));
        }
        entry_count  = buffer.lpcast<uint32_t>(offset);
        auto entries = buffer.lpcast<uint64_t>(offset, entry_count);
        is_encrypted = buffer.lpcast<bool>(offset);

        for (const auto &entry : entries) {
            auto string_offset = entry >> 40;
            auto hash          = entry & 0xffffffffff;
            auto string_ptr    = buffer.data() + offset + string_offset;
            if (is_encrypted && string_ptr[0] == 0xff) {
                auto string_len = reinterpret_cast<uint16_t *>(string_ptr + 1)[0];
                strings[hash] = std::string(string_ptr + 3, string_ptr + 3 + string_len);
            } else {
                strings[hash] = std::string(reinterpret_cast<const char *>(string_ptr));
            }
        }
    }

    nlohmann::json rst_file_v2::to_json(cdtb::hashlist_collection &hashes) {
        auto list       = hashes.get_xxhashlist(cdtb::hashlist_target::rst_string);
        auto json       = json::object();
        json["config"]  = config;
        auto entries    = json::object();
        json["entries"] = entries;
        for (const auto &entry : strings) {
            entries[list == nullptr ? cdtb::hashlist<uint64_t>::hex_hash(entry.first) : list->get_string(entry.first)] = entry.second;
        }
        return json;
    }
} // namespace yordle::data
