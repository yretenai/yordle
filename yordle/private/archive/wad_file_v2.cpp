//
// Created by Lilith on 2020-09-09.
//

#include <algorithm>
#include <cassert>
#include <cctype>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_v2.hpp>

#include <xxhash.h>
#include <zlib.h>
#include <zstd.h>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

namespace yordle::archive {
    wad_file_v2::wad_file_v2(istream &stream) {
        auto data_start = reinterpret_cast<uintptr_t>(&checksum);
#ifndef NDEBUG
        auto data_end = reinterpret_cast<uintptr_t>(&entry_count) + sizeof(uint32_t);
        assert(data_end - data_start == EXPECTED_DATA_SIZE);
#endif

        Array<uint8_t> buffer(5, nullptr);
        stream.read(reinterpret_cast<char *>(buffer.data()), 5);

        if (buffer.cast<uint32_t>(0) != FOURCC) {
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
            entries = make_shared<Array<wad_entry_v2>>(entry_count, nullptr);
            stream.read(reinterpret_cast<char *>(entries->data()), static_cast<streamsize>(entries->byte_size()));
        }
    }

    shared_ptr<Array<uint8_t>> wad_file_v2::read_file(istream &stream, const wad_entry_v2 &entry) {
        stream.seekg(entry.offset);
        auto buffer = make_shared<Array<uint8_t>>(entry.size, nullptr);
        switch (entry.type) {
            case WAD_STORAGE_TYPE::Uncompressed:
                stream.read(reinterpret_cast<char *>(buffer->data()), entry.size);
                break;
            case WAD_STORAGE_TYPE::Zlib: { // untested
                Array<uint8_t> compressed(entry.csize, nullptr);
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
                            throw invalid_data("zlib error");
                        default:
                            continue;
                    }
                } while (zs.avail_out > 0);
                break;
            }
            case WAD_STORAGE_TYPE::Symlink: {
                uint32_t symlink_length = 0;
                stream.read(reinterpret_cast<char *>(&symlink_length), sizeof(symlink_length));
                buffer = make_shared<Array<uint8_t>>(symlink_length, nullptr);
                stream.read(reinterpret_cast<char *>(buffer->data()), symlink_length);
                DRAGON_BREAK;
                break;
            }
            case WAD_STORAGE_TYPE::Zstd: { // YEP
                Array<uint8_t> compressed(entry.csize, nullptr);
                stream.read(reinterpret_cast<char *>(compressed.data()), entry.csize);
                ZSTD_decompress(buffer->data(), entry.size, compressed.data(), entry.csize);
                break;
            }
            default: {
                throw invalid_data("type is out of range");
            }
        }
        return buffer;
    }

    [[nodiscard]] bool wad_file_v2::has_file(uint64_t hash) const {
        return any_of(entries->begin(), entries->end(), [&](wad_entry_v2 entry) { return entry.hash == hash; });
    }

    [[nodiscard]] bool wad_file_v2::has_file(const filesystem::path &path) const {
        string data = path.string();
        transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
        return has_file(XXH64(data.data(), data.length(), 0));
    }
} // namespace yordle::archive
