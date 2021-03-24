//
// Created by Lilith on 2020-09-09.
//

#include <algorithm>
#include <cassert>
#include <cctype>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v3.hpp>

#include <xxhash.h>
#include <zlib.h>
#include <zstd.h>

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
        entries = std::make_shared<dragon::Array<wad_entry_v3>>(entry_count, nullptr);
        stream.read(reinterpret_cast<char *>(entries->data()), entries->byte_size());
    }
}

[[maybe_unused]] std::shared_ptr<dragon::Array<uint8_t>> yordle::archive::wad_file_v3::read_file(std::istream &stream, const yordle::archive::wad_file_v3::wad_entry_v3 &entry) {
    stream.seekg(entry.offset);
    auto buffer = std::make_shared<dragon::Array<uint8_t>>(entry.size, nullptr);
    switch (entry.type) {
        case yordle::archive::WAD_STORAGE_TYPE::Uncompressed:
            stream.read(reinterpret_cast<char *>(buffer->data()), entry.size);
            break;
        case yordle::archive::WAD_STORAGE_TYPE::Zlib: { // untested
            dragon::Array<uint8_t> compressed(entry.csize, nullptr);
            stream.read(reinterpret_cast<char *>(compressed.data()), entry.csize);
            z_stream zs;
            zs.zalloc = nullptr;
            zs.zfree = nullptr;
            zs.next_in = compressed.data();
            zs.avail_in = static_cast<uInt>(entry.csize);
            zs.next_out = buffer->data();
            zs.avail_out = static_cast<uInt>(entry.size);
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
            break;
        }
        case yordle::archive::WAD_STORAGE_TYPE::Symlink: {
            uint32_t symlink_length = 0;
            stream.read(reinterpret_cast<char *>(&symlink_length), sizeof(symlink_length));
            buffer = std::make_shared<dragon::Array<uint8_t>>(symlink_length, nullptr);
            stream.read(reinterpret_cast<char *>(buffer->data()), symlink_length);
            DRAGON_BREAK;
            break;
        }
        case yordle::archive::WAD_STORAGE_TYPE::Zstd: { // YEP
            dragon::Array<uint8_t> compressed(entry.csize, nullptr);
            stream.read(reinterpret_cast<char *>(compressed.data()), entry.csize);
            ZSTD_decompress(buffer->data(), entry.size, compressed.data(), entry.csize);
            break;
        }
        default: {
            throw dragon::exception::invalid_data("type is out of range");
        }
    }
    return buffer;
}

[[maybe_unused]] [[nodiscard]] bool yordle::archive::wad_file_v3::has_file(uint64_t hash) const {
    return std::any_of(entries->begin(), entries->end(), [&](yordle::archive::wad_file_v3::wad_entry_v3 entry) { return entry.hash == hash; });
}

[[maybe_unused]] [[nodiscard]] bool yordle::archive::wad_file_v3::has_file(const std::filesystem::path &path) const {
    std::string data = path.string();
    std::transform(data.begin(), data.end(), data.begin(), [](char c) { return std::tolower(c); });
    return has_file(XXH64(data.data(), data.length(), 0));
}
