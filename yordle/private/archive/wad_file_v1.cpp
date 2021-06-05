//
// Created by Lilith on 2021-06-04.
//

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

        fourcc = buffer.cast<yordle::archive::wad_version>(0);

        if (fourcc != yordle::archive::wad_version::v1_0 || buffer.size() < EXPECTED_DATA_SIZE) {
            throw invalid_data("Buffer passed to wad_file_v1 is not a valid RW10 buffer.");
        }

        buffer.copy(data_start, 0, EXPECTED_DATA_SIZE);

        if (entry_count > 0) {
            read_entries<wad_entry_v1>(stream, entry_count);
        }
    }
} // namespace yordle::archive
