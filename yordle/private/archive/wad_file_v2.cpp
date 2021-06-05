//
// Created by Lilith on 2021-06-04.
//

#include <cassert>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v2.hpp>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::archive {
    wad_file_v2::wad_file_v2(istream &stream) : wad_file() {
        auto data_start = reinterpret_cast<uintptr_t>(&checksum);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        Array<uint8_t> buffer(5, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), 5);

        if (buffer.cast<uint32_t>(0) != FOURCC_2_0) {
            throw invalid_data("Buffer passed to wad_file_v2 is not a valid RW20 buffer.");
        }

        signature = std::make_shared<dragon::Array<uint8_t>>(static_cast<size_t>(buffer[4]), nullptr);
        stream.read(reinterpret_cast<char *>(signature->data()), static_cast<streamsize>(signature->byte_size()));
        if (83 - buffer[4] > 0) {
            extra_data = std::make_shared<dragon::Array<uint8_t>>(static_cast<size_t>(83 - buffer[4]), nullptr);
            stream.read(reinterpret_cast<char *>(extra_data->data()), static_cast<streamsize>(extra_data->byte_size()));
        }


        buffer = Array<uint8_t>(EXPECTED_DATA_SIZE, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), static_cast<streamsize>(buffer.byte_size()));
        buffer.copy(data_start, 0, EXPECTED_DATA_SIZE);

        if (entry_count > 0) {
            read_entries<wad_entry_v2>(stream, entry_count);
        }
    }
} // namespace yordle::archive
