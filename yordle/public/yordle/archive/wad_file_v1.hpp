//
// Created by Lilith on 2020-09-09.
//

#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <cstdint>
#include <istream>

#include <yordle/archive/wad_file_common.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::archive {
    class YORDLE_EXPORT wad_file_v1 : public wad_file {
    private:
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

        int wad_version() override {
            return 1;
        }
    };
} // namespace yordle::archive

#pragma clang diagnostic pop
