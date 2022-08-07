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
        is_encrypted = buffer.lpcast<bool>(offset);

        for (const auto &entry : entries) {
            auto string_offset = entry >> 39;
            auto hash          = entry & 0x7fffffffff;
            auto string_ptr    = buffer.data() + offset + string_offset;
            if (is_encrypted && string_ptr[0] == 0xff) {
                auto string_len = reinterpret_cast<uint16_t *>(string_ptr + 1)[0];
                strings[hash] = std::string(string_ptr + 3, string_ptr + 3 + string_len);
            } else {
                strings[hash] = std::string(reinterpret_cast<const char *>(string_ptr));
            }
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
