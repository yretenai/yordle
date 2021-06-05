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
#pragma pack(push, 4)
    typedef struct WAD_ENTRY_V1 {
        uint64_t hash;
        uint32_t offset;
        uint32_t csize;
        uint32_t size;
        wad_storage_type type;
        bool duplicate;
    } wad_entry_v1;
    DRAGON_ASSERT(sizeof(WAD_ENTRY_V1) == 0x18);
#pragma pack(pop)

    class YORDLE_EXPORT wad_file_v1 : public wad_file<wad_entry_v1> {
    private:
        static constexpr uint32_t FOURCC = DRAGON_MAGIC32('R', 'W', 1, 0);
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x8;

    public:
        explicit wad_file_v1() = default;
        explicit wad_file_v1(std::istream &stream);
        ~wad_file_v1() = default;

#pragma pack(push, 1)
        struct {
            uint16_t entry_offset = 0;
            uint16_t entry_size = 0;
            uint32_t entry_count = 0;
        };
#pragma pack(pop)

        std::shared_ptr<dragon::Array<uint8_t>> read_file(std::istream &stream, const wad_entry_v1 &entry) override;
        [[nodiscard]] bool has_file(uint64_t hash) const override;
        [[nodiscard]] bool has_file(const std::filesystem::path &path) const override;
    };
} // namespace yordle::archive

#pragma clang diagnostic pop
