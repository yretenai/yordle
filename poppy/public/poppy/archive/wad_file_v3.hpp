//
// Created by yretenai on 2020-09-09.
//

#ifndef POPPY_WAD_FILE_V3_HPP
#define POPPY_WAD_FILE_V3_HPP

#include <cstdbool>
#include <cstdint>
#include <istream>

#include <poppy/archive/wad_file_common.hpp>
#include <poppy/poppy_export.h>

#include <standard_dragon/dragon.h>

namespace poppy::archive {
    class POPPY_EXPORT wad_file_v3 {
    private:
        static constexpr uint32_t FOURCC = MAKEFOURCC('R', 'W', 3, 0);
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

        static dragon::Array<uint8_t> read_file(dragon::Array<uint8_t> &buffer, wad_entry_v3 entry);
        static dragon::Array<uint8_t> read_file(std::istream &stream, wad_entry_v3 entry);
    };
} // namespace poppy::archive


#endif //POPPY_WAD_FILE_V3_HPP
