//
// Created by yretenai on 2020-09-09.
//

#include <algorithm>
#include <cassert>
#include <cctype>

#include <standard_dragon/exception/invalid_data.hpp>
#include <standard_dragon/exception/not_implemented.hpp>
#include <yordle/archive/wad_file_v3.hpp>

#include <xxhash.h>
#include <zlib.h>
#include <zstd.h>

[[maybe_unused]] yordle::archive::wad_file_v3::wad_file_v3(dragon::Array<uint8_t> &buffer) {
    auto data_start = reinterpret_cast<uintptr_t>(&signature);
#ifndef NDEBUG
    auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 4) {
        throw dragon::exception::invalid_data("Buffer passed to wad_file_v3 is not a valid RW30 buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

    if (entry_count > 0) {
        entries = dragon::Array<wad_entry_v3>(entry_count, nullptr);
        buffer.copy(reinterpret_cast<uintptr_t>(entries.data()), EXPECTED_DATA_SIZE + 4, entries.byte_size());
    }
}

[[maybe_unused]] yordle::archive::wad_file_v3::wad_file_v3(std::istream &stream) {
    auto data_start = reinterpret_cast<uintptr_t>(&signature);
#ifndef NDEBUG
    auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
    assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

    dragon::Array<uint8_t> buffer(EXPECTED_DATA_SIZE + 4, nullptr);
    stream.read(reinterpret_cast<char *>(buffer.data()), EXPECTED_DATA_SIZE + 4);

    if (buffer.cast<uint32_t>(0) != FOURCC || buffer.size() < EXPECTED_DATA_SIZE + 4) {
        throw dragon::exception::invalid_data("Buffer passed to wad_file_v3 is not a valid RW30 buffer.");
    }

    buffer.copy(data_start, 4, EXPECTED_DATA_SIZE);

    if (entry_count > 0) {
        entries = dragon::Array<wad_entry_v3>(entry_count, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), entries.byte_size());
    }
}

dragon::Array<uint8_t> decompress(yordle::archive::wad_file_v3::wad_entry_v3 entry, dragon::Array<uint8_t> &buffer) {
    switch (entry.type) {
        case yordle::archive::WAD_STORAGE_TYPE::Uncompressed:
            return buffer;
        case yordle::archive::WAD_STORAGE_TYPE::Zlib: { // untested
            dragon::Array<uint8_t> data(entry.size, nullptr);
            z_stream zs;
            zs.zalloc = nullptr;
            zs.zfree = nullptr;
            zs.next_in = buffer.data();
            zs.avail_in = static_cast<uInt>(buffer.size());
            zs.next_out = data.data();
            zs.avail_out = static_cast<uInt>(data.size());
            inflateInit(&zs);
            do {
                switch (inflate(&zs, Z_NO_FLUSH)) {
                    case Z_NEED_DICT:
                    case Z_DATA_ERROR:
                    case Z_STREAM_ERROR:
                    case Z_MEM_ERROR:
                        throw dragon::exception::invalid_data("zlib error");
                }
            } while (zs.avail_out > 0);
            return data;
        }
        case yordle::archive::WAD_STORAGE_TYPE::Symlink: // no clue how this works
            throw dragon::exception::not_implemented("wad_storage_type::symlink");
        case yordle::archive::WAD_STORAGE_TYPE::Zstd: { // YEP
            dragon::Array<uint8_t> data(entry.size, nullptr);
            ZSTD_decompress(data.data(), entry.size, buffer.data(), entry.csize);
            return data;
        }
        default:
            throw dragon::exception::invalid_data("type is out of range");
    }
}

[[maybe_unused]] dragon::Array<uint8_t> yordle::archive::wad_file_v3::read_file(dragon::Array<uint8_t> &buffer, const yordle::archive::wad_file_v3::wad_entry_v3 &entry) {
    dragon::Array<uint8_t> data(entry.csize, nullptr);
    buffer.copy(reinterpret_cast<uintptr_t>(data.data()), entry.offset, entry.csize);
    return decompress(entry, data);
}

[[maybe_unused]] dragon::Array<uint8_t> yordle::archive::wad_file_v3::read_file(std::istream &stream, const yordle::archive::wad_file_v3::wad_entry_v3 &entry) {
    dragon::Array<uint8_t> data(entry.csize, nullptr);
    stream.seekg(entry.offset);
    stream.read(reinterpret_cast<char *>(data.data()), entry.csize);
    return decompress(entry, data);
}

[[maybe_unused]] [[nodiscard]] bool yordle::archive::wad_file_v3::has_file(uint64_t hash) const {
    return std::any_of(entries.begin(), entries.end(), [&](yordle::archive::wad_file_v3::wad_entry_v3 entry) { return entry.hash == hash; });
}

[[maybe_unused]] [[nodiscard]] bool yordle::archive::wad_file_v3::has_file(const std::filesystem::path &path) const {
    std::string data = path.string();
    std::transform(data.begin(), data.end(), data.begin(), [](char c) { return std::tolower(c); });
    return has_file(XXH64(data.data(), data.length(), 0));
}
