//
// Created by yretenai on 2020-09-09.
//

#pragma once

#include <cstdbool>
#include <cstdint>
#include <filesystem>
#include <istream>

#include <yordle/archive/wad_file_common.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::archive {
    class YORDLE_EXPORT wad_file_v3 {
    private:
        static constexpr uint32_t FOURCC = DRAGON_MAGIC32('R', 'W', 3, 0);
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x10C;

    public:
        explicit wad_file_v3(dragon::Array<uint8_t> &buffer);
        explicit wad_file_v3(std::istream &stream);
        ~wad_file_v3() = default;

#pragma pack(push, 1)
        typedef struct WAD_ENTRY_V3 {
            uint64_t hash;
            uint32_t offset;
            uint32_t csize;
            uint32_t size;
            wad_storage_type type;
            bool duplicate;
            uint16_t pad;
            uint64_t checksum;
        } wad_entry_v3;

        uint8_t signature[256] = {};
        uint64_t checksum = 0;
        uint32_t entry_count = 0;
#pragma pack(pop)

        dragon::Array<wad_entry_v3> entries;

        static dragon::Array<uint8_t> read_file(dragon::Array<uint8_t> &buffer, const wad_entry_v3 &entry);
        static dragon::Array<uint8_t> read_file(std::istream &stream, const wad_entry_v3 &entry);
        bool has_file(uint64_t hash) const;
        bool has_file(const std::filesystem::path &path) const;
    };
} // namespace yordle::archive
