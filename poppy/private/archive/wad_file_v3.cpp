//
// Created by yretenai on 2020-09-09.
//

#include <poppy/archive/wad_file_v3.hpp>
#include <poppy/exception/invalid_data_exception.hpp>
#include <poppy/exception/not_implemented_exception.hpp>

#include <zlib.h>
#include <zstd.h>

using namespace poppy::exception;

poppy::archive::wad_file_v3::wad_file_v3(dragon::Array<uint8_t> &buffer) {
    uintptr_t data_start = reinterpret_cast<uintptr_t>(&signature);
#ifndef NDEBUG
    uintptr_t data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE) {
        throw invalid_data_exception("Buffer passed to RiotManifest is not a valid RMAN buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

    if (entry_count > 0) {
        entries = dragon::Array<wad_entry_v3>(entry_count, nullptr);
        buffer.copy(reinterpret_cast<uintptr_t>(entries.data()), EXPECTED_DATA_SIZE, entries.byte_size());
    }
}

poppy::archive::wad_file_v3::wad_file_v3(std::istream &stream) {
    uintptr_t data_start = reinterpret_cast<uintptr_t>(&signature);
#ifndef NDEBUG
    uintptr_t data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    dragon::Array<uint8_t> buffer(EXPECTED_DATA_SIZE + 4, nullptr);
    stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE + 4);

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 4) {
        throw invalid_data_exception("Buffer passed to RiotManifest is not a valid RMAN buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

    if (entry_count > 0) {
        entries = dragon::Array<wad_entry_v3>(entry_count, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), entries.byte_size());
    }
}

dragon::Array<uint8_t> decompress(poppy::archive::wad_file_v3::wad_entry_v3 entry, dragon::Array<uint8_t> &buffer) {
    switch (entry.type) {
        case poppy::archive::WAD_STORAGE_TYPE::Uncompressed:
            return buffer;
        case poppy::archive::WAD_STORAGE_TYPE::Zlib: { // untested
            dragon::Array<uint8_t> data(entry.size, nullptr);
            z_stream zs;
            zs.zalloc = nullptr;
            zs.zfree = nullptr;
            zs.next_in = buffer.data();
            zs.avail_in = buffer.size();
            zs.next_out = data.data();
            zs.avail_out = data.size();
            inflateInit(&zs);
            do {
                switch (inflate(&zs, Z_NO_FLUSH)) {
                    case Z_NEED_DICT:
                    case Z_DATA_ERROR:
                    case Z_STREAM_ERROR:
                    case Z_MEM_ERROR:
                        throw invalid_data_exception("zlib error");
                }
            } while (zs.avail_out > 0);
            return data;
        }
        case poppy::archive::WAD_STORAGE_TYPE::Symlink: // no clue how this works
            throw not_implemented_exception("wad_storage_type::symlink");
        case poppy::archive::WAD_STORAGE_TYPE::Zstd: { // YEP
            dragon::Array<uint8_t> data(entry.size, nullptr);
            ZSTD_decompress(data.data(), entry.size, buffer.data(), entry.csize);
            return data;
        }
        default:
            throw invalid_data_exception("type is out of range");
    }
}

dragon::Array<uint8_t> poppy::archive::wad_file_v3::read_file(dragon::Array<uint8_t> &buffer, poppy::archive::wad_file_v3::wad_entry_v3 entry) {
    dragon::Array<uint8_t> data(entry.csize, nullptr);
    buffer.copy(reinterpret_cast<uintptr_t>(data.data()), entry.offset, entry.csize);
    return decompress(entry, data);
}

dragon::Array<uint8_t> poppy::archive::wad_file_v3::read_file(std::istream &stream, poppy::archive::wad_file_v3::wad_entry_v3 entry) {
    dragon::Array<uint8_t> data(entry.csize, nullptr);
    stream.seekg(entry.offset);
    stream.read(reinterpret_cast<char *>(data.data()), entry.csize);
    return decompress(entry, data);
}
