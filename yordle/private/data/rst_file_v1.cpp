#include <yordle/data/rst_file_v1.hpp>

using namespace std;
using namespace dragon;

namespace yordle::data {
    rst_file_v1::rst_file_v1(Array<uint8_t> &buffer) {
        uintptr_t offset = 0;

        fourcc       = buffer.lpcast<rst_version>(offset);
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
} // namespace yordle::data
