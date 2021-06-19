//
// Created by Lilith on 2021-06-17.
//

#include <yordle/data/rst_file_v4.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data {
    rst_file_v4::rst_file_v4(Array<uint8_t> &buffer) {
        uintptr_t offset = 0;

        fourcc       = buffer.lpcast<rst_version>(offset);
        entry_count  = buffer.lpcast<uint32_t>(offset);
        auto entries = buffer.lpcast<uint64_t>(offset, entry_count);
        some_switch  = buffer.lpcast<bool>(offset);

        for (const auto &entry : entries) {
            auto string_offset = entry >> 39;
            auto hash          = entry & 0x7fffffffff;
            strings[hash]      = std::string(reinterpret_cast<const char *>(buffer.data() + offset + string_offset));
        }
    }

    nlohmann::json rst_file_v4::to_json(cdtb::hashlist_collection &hashes) {
        auto list = hashes.get_xxhashlist(cdtb::hashlist_target::rst4_string);
        if (list == nullptr) {
            list = hashes.get_xxhashlist(cdtb::hashlist_target::rst_string);
            if (list != nullptr) {
                list = list->restrict_bits(40);

                hashes.xx[cdtb::hashlist_target::rst_string] = list;
            }
        }
        auto json = json::object();
        for (const auto &entry : strings) {
            json[list == nullptr ? cdtb::hashlist<uint64_t>::hex_hash(entry.first) : list->get_string(entry.first)] = entry.second;
        }
        return json;
    }
} // namespace yordle::data
