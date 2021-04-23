//
// Created by Lilith on 2020-09-09.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

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
        explicit wad_file_v3(std::istream &stream);
        ~wad_file_v3() = default;

#pragma pack(push, 4)
        typedef struct WAD_ENTRY_V3 {
            uint64_t hash;
            uint32_t offset;
            uint32_t csize;
            uint32_t size;
            wad_storage_type type;
            bool duplicate;
            uint64_t checksum;
        } wad_entry_v3;
        DRAGON_ASSERT(sizeof(WAD_ENTRY_V3) == 0x20);
#pragma pack(pop)

#pragma pack(push, 1)
        struct {
            uint8_t signature[256] = {};
            uint64_t checksum = 0;
            uint32_t entry_count = 0;
        };
#pragma pack(pop)

        std::shared_ptr<dragon::Array<wad_entry_v3>> entries;

        static std::shared_ptr<dragon::Array<uint8_t>> read_file(std::istream &stream, const wad_entry_v3 &entry);
        [[nodiscard]] bool has_file(uint64_t hash) const;
        [[nodiscard]] bool has_file(const std::filesystem::path &path) const;
    };
} // namespace yordle::archive

#pragma clang diagnostic pop
