//
// Created by Lilith on 2021-06-17.
//

#include <yordle/data/rst_file_v2.hpp>

using namespace std;
using namespace dragon;

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
        some_switch  = buffer.lpcast<bool>(offset);

        for (const auto &entry : entries) {
            auto string_offset = entry >> 40;
            auto hash          = entry & 0xffffffffff;
            strings[hash]      = std::string(reinterpret_cast<const char *>(buffer.data() + offset + string_offset));
        }
    }
} // namespace yordle::data
