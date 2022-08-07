#include <cassert>

#include <yordle/data/inibin_v1.hpp>

using namespace std;
using namespace dragon;

namespace yordle::data {
    inibin_v1::inibin_v1(Array<uint8_t> &buffer) {
        auto data_start = reinterpret_cast<uintptr_t>(&prop_count);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&blob_length) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        assert(buffer[0] == 1);

        buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

        auto keys         = buffer.cast<inibin_v1_entry>(4 + EXPECTED_DATA_SIZE, prop_count);
        auto string_table = buffer.slice(4 + EXPECTED_DATA_SIZE + keys.byte_size(), blob_length);

        for (auto key : keys) {
            properties[key.hash] = string(reinterpret_cast<const char *>(string_table.data() + key.offset));
        }
    }
} // namespace yordle::data
