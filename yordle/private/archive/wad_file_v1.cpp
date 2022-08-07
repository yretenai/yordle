#include <cassert>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v1.hpp>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::archive {
    wad_file_v1::wad_file_v1(istream &stream) {
        auto data_start = reinterpret_cast<uintptr_t>(&fourcc);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        Array<uint8_t> buffer(EXPECTED_DATA_SIZE, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE);

        buffer.copy(data_start, 0, EXPECTED_DATA_SIZE);

        if (entry_count > 0) {
            read_entries<wad_entry_v1>(stream, entry_count);
        }
    }
} // namespace yordle::archive
