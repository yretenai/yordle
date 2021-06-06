//
// Created by Lilith on 2021-06-05.
//

#include <algorithm>

#include <standard_dragon/exception/invalid_data.hpp>
#include <yordle/archive/wad_file_common.hpp>

#include <yordle/archive/wad_file_v1.hpp>
#include <yordle/archive/wad_file_v2.hpp>
#include <yordle/archive/wad_file_v3.hpp>

#include <gzip/decompress.hpp>
#include <xxhash.h>
#include <zstd.h>

using namespace dragon;
using namespace dragon::exception;
using namespace std;

std::shared_ptr<dragon::Array<uint8_t>> yordle::archive::wad_file::read_file(std::istream &stream, const wad_entry &entry) {
    stream.seekg(entry.offset);
    auto buffer = make_shared<Array<uint8_t>>(entry.size, nullptr);
    switch (entry.type) {
        case WAD_STORAGE_TYPE::Uncompressed:
            stream.read(reinterpret_cast<char *>(buffer->data()), entry.size);
            break;
        case WAD_STORAGE_TYPE::GZip: {
            Array<uint8_t> compressed(entry.csize, nullptr);
            stream.read(reinterpret_cast<char *>(compressed.data()), entry.csize);
            gzip::Decompressor decompressor;
            auto gzipBuffer = std::vector<char>();
            decompressor.decompress(gzipBuffer, reinterpret_cast<const char *>(compressed.data()), entry.csize);
            buffer->paste(reinterpret_cast<uintptr_t>(gzipBuffer.data()), 0, gzipBuffer.size());
            break;
        }
        case WAD_STORAGE_TYPE::Symlink: {
            uint32_t symlink_length = 0;
            stream.read(reinterpret_cast<char *>(&symlink_length), sizeof(symlink_length));
            buffer = make_shared<Array<uint8_t>>(symlink_length, nullptr);
            stream.read(reinterpret_cast<char *>(buffer->data()), symlink_length);
            break;
        }
        case WAD_STORAGE_TYPE::Zstd: {
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

bool yordle::archive::wad_file::has_file(uint64_t hash) const {
    return any_of(entries->begin(), entries->end(), [&](wad_entry entry) { return entry.hash == hash; });
}

bool yordle::archive::wad_file::has_file(const std::filesystem::path &path) const {
    string data = path.string();
    transform(data.begin(), data.end(), data.begin(), [](char c) { return tolower(c); });
    return has_file(XXH64(data.data(), data.length(), 0));
}

shared_ptr<yordle::archive::wad_file> yordle::archive::wad_file::load_wad_file(istream &stream) {
    yordle::archive::wad_version fourcc;
    auto pos = stream.tellg();
    stream.read(reinterpret_cast<char *>(&fourcc), sizeof(yordle::archive::wad_version));
    stream.seekg(pos, ios::beg);

    switch (fourcc) {
        case yordle::archive::wad_version ::v1_0:
        case yordle::archive::wad_version ::v1_1:
            return make_shared<yordle::archive::wad_file_v1>(stream);
        case yordle::archive::wad_version ::v2_0:
        case yordle::archive::wad_version ::v2_1:
            return make_shared<yordle::archive::wad_file_v2>(stream);
        case yordle::archive::wad_version ::v3_0:
        case yordle::archive::wad_version ::v3_1:
            return make_shared<yordle::archive::wad_file_v3>(stream);
        case yordle::archive::wad_version::v0_0:
        default:
            return nullptr;
    }
}
