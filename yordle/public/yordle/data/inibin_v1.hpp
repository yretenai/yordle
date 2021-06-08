//
// Created by Lilith on 2021-06-06.
//

#pragma once

#include <yordle/data/inibin.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/macros.hpp>

namespace yordle::data {
    class YORDLE_EXPORT inibin_v1 : public inibin {
    private:
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x08;

    public:
        explicit inibin_v1() = default;
        explicit inibin_v1(dragon::Array<uint8_t> &buffer);

#pragma pack(push, 4)
        typedef struct INIBIN_V1_ENTRY {
            uint32_t hash;
            uint32_t offset;
        } inibin_v1_entry;
        DRAGON_ASSERT(sizeof(inibin_v1_entry) == 8);
#pragma pack(pop)

#pragma pack(push, 1)
        struct {
            uint32_t prop_count  = 0;
            uint32_t blob_length = 0;
        };
#pragma pack(pop)

        uint8_t get_inibin_version() override {
            return 1;
        }
    };
} // namespace yordle::data
