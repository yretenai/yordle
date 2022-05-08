//
// Created by Lilith on 2021-06-16.
//

#include <standard_dragon/dragon.hpp>

#include "file_type_detector.hpp"

using namespace std;
using namespace dragon;

bool test_legacydirlistinfo(shared_ptr<Array<uint8_t>> &buffer) {
    if (buffer->size() < 4) {
        return false;
    }

    auto len = buffer->cast<uint32_t>(4);
    if (len == 0 || buffer->size() < 8 + len) {
        return false;
    }
    for (auto i = 0; i < len; i++) {
        auto c = buffer->get(8 + i);
        if (c < 0x20 || c > 0x7E) {
            return false;
        }
    }

    return true;
}

namespace lulu {
    const vector<file_type_detector::FileType> file_type_detector::types = {
        {".dds", 0x046C2A, 24},                                               // Encrypted/Secret DDS
        {".dds", DRAGON_MAGIC32('D', 'D', 'S', 0), 24},                       // DDS
        {".bin", DRAGON_MAGIC32('P', 'R', 'O', 'P'), 32},                     // Property Bin
        {".bin", DRAGON_MAGIC32('P', 'T', 'C', 'H'), 32},                     // Property Bin Patch
        {".bundle", DRAGON_MAGIC32('R', 'B', 'U', 'N'), 32},                  // Bundle
        {".manifest", DRAGON_MAGIC32('R', 'M', 'A', 'N'), 32},                // Riot Manifest
        {".wad", DRAGON_MAGIC32('R', 'W', 0, 0), 16},                         // WAD storage
        {".anm", DRAGON_MAGIC64('r', '3', 'd', '2', 'a', 'n', 'm', 'd'), 64}, // animation data
        {".scb", DRAGON_MAGIC64('r', '3', 'd', '2', 'M', 'e', 's', 'h'), 64}, // mesh data
        {".wpk", DRAGON_MAGIC32('r', '3', 'd', '2'), 32},                     // Wem Pack
        {".bnk", DRAGON_MAGIC32('B', 'K', 'H', 'D'), 32},                     // soundbank
        {".skn", 0x00112233, 32},                                             // skin file
        {".luabin", DRAGON_MAGIC32(0x1B, 'L', 'u', 'a'), 32},                 // lua binary
        {".txt", DRAGON_MAGIC32('R', 'S', 'T', 0), 24},                       // lua binary
        {".rofl", DRAGON_MAGIC32('R', 'I', 'O', 'T'), 32},                    // replay
        {".jpg", 0xFFD8FF, 24},                                               // jpeg
        {".png", DRAGON_MAGIC32(0x89, 'P', 'N', 'G'), 32},                    // png
        {".ogg", DRAGON_MAGIC32('O', 'g', 'g', 0), 24},                       // ogg/vorbis
        {".webm", 0xA3DF451A, 32},                                            // webm
        {".svg", DRAGON_MAGIC32('<', 's', 'v', 'g'), 32},                     // svg
        {".json", 0x7B, 8},                                                   // {
        {".json", 0x5B, 8},                                                   // [
    };

    std::string file_type_detector::detect_extension(shared_ptr<dragon::Array<uint8_t>> &buffer) {
        auto size = buffer->size();
        if (size < 1) {
            return string();
        }

        uint64_t magic;

        if (size >= 8) {
            magic = buffer->cast<uint64_t>(0);
        } else if (size >= 4) {
            magic = buffer->cast<uint32_t>(0);
        } else if (size >= 2) {
            magic = buffer->cast<uint16_t>(0);
        } else if (size >= 1) {
            magic = buffer->get(0);
        }
        for (const auto &test : types) {
            if ((magic & (((uint64_t) 1 << test.bits) - 1)) == test.magic) {
                return test.ext;
            }
        }

        if (size >= 8) {
            magic = buffer->cast<uint64_t>(size - 8);
        } else if (size >= 4) {
            magic = buffer->cast<uint32_t>(size - 4);
        } else if (size >= 2) {
            magic = buffer->cast<uint16_t>(size - 2);
        } else if (size >= 1) {
            magic = buffer->get(size - 1);
        }
        for (const auto &test : types) {
            if (magic >> (64 - test.bits) == test.magic) {
                return test.ext;
            }
        }

        // special case for manifest/legacy dir list files
        if (test_legacydirlistinfo(buffer)) {
            return ".legacydirlistinfo";
        }

        return string();
    }
} // namespace lulu
