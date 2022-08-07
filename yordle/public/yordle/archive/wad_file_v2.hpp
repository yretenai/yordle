#pragma once
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <cstdint>
#include <istream>

#include <yordle/archive/wad_file.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::archive {
    class YORDLE_EXPORT wad_file_v2 : public wad_file {
    private:
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x10;

    public:
        explicit wad_file_v2() = default;
        explicit wad_file_v2(std::istream &stream);
        ~wad_file_v2() = default;

        std::shared_ptr<dragon::Array<uint8_t>> signature;
        std::shared_ptr<dragon::Array<uint8_t>> extra_data;

        yordle::archive::wad_version fourcc = yordle::archive::wad_version::v0_0;

#pragma pack(push, 1)
        struct {
            uint64_t checksum     = 0;
            uint16_t entry_offset = 0;
            uint16_t entry_size   = 0;
            uint32_t entry_count  = 0;
        };
#pragma pack(pop)

        yordle::archive::wad_version get_wad_version() override {
            return fourcc;
        }
    };
} // namespace yordle::archive

#pragma clang diagnostic pop
