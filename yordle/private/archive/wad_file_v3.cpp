//
// Created by Naomi on 2020-09-09.
//

#include <cassert>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v3.hpp>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::archive {
    wad_file_v3::wad_file_v3(istream &stream) : wad_file() {
        auto data_start = reinterpret_cast<uintptr_t>(&fourcc);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        Array<uint8_t> buffer(EXPECTED_DATA_SIZE, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE);

        buffer.copy(data_start, 0, EXPECTED_DATA_SIZE);

        if (entry_count > 0) {
            if(fourcc >= WAD_VERSION::v3_3) {
                read_entries<wad_entry_v3>(stream, entry_count);
            } else {
                read_entries<wad_entry_v2>(stream, entry_count);
            }
        }
    }

    bool wad_file_v3::uses_xxhash() const {
        return fourcc == yordle::archive::wad_version::v3_1;
    }
} // namespace yordle::archive
