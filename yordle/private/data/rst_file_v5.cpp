//
// Created by Naomi on 2022-08-07.
//

#include <yordle/data/rst_file_v5.hpp>

using namespace std;
using namespace dragon;
using namespace nlohmann;

namespace yordle::data {
    rst_file_v5::rst_file_v5(Array<uint8_t> &buffer) {
        uintptr_t offset = 0;

        fourcc       = buffer.lpcast<rst_version>(offset);
        entry_count  = buffer.lpcast<uint32_t>(offset);
        auto entries = buffer.lpcast<uint64_t>(offset, entry_count);

        for (const auto &entry : entries) {
            auto string_offset = entry >> 39;
            auto hash          = entry & 0x7fffffffff;
            strings[hash]      = std::string(reinterpret_cast<const char *>(buffer.data() + offset + string_offset));
        }
    }
} // namespace yordle::data
