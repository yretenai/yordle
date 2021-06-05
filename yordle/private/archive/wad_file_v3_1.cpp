//
// Created by Lilith on 2020-09-09.
//

#include <cassert>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v3_1.hpp>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::archive {
    wad_file_v3_1::wad_file_v3_1(istream &stream) : wad_file_v3() {
        auto data_start = reinterpret_cast<uintptr_t>(&signature);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        Array<uint8_t> buffer(EXPECTED_DATA_SIZE + 4, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE + 4);

        if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 4) {
            throw invalid_data("Buffer passed to wad_file_v3_1 is not a valid RW31 buffer.");
        }

        buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

        if (entry_count > 0) {
            entries = make_shared<Array<wad_entry_v2>>(entry_count, nullptr);
            stream.read(reinterpret_cast<char *>(entries->data()), static_cast<streamsize>(entries->byte_size()));
        }
    }
} // namespace yordle::archive
