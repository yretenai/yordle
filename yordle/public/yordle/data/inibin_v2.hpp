#pragma once

#include <yordle/data/inibin.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/macros.hpp>

namespace yordle::data {
    class YORDLE_EXPORT inibin_v2 : public inibin {
    private:
        static constexpr uintptr_t EXPECTED_DATA_SIZE = 0x04;

    public:
        explicit inibin_v2() = default;
        explicit inibin_v2(dragon::Array<uint8_t> &buffer);

#pragma pack(push, 2)
        using inibin_v2_flags = union alignas(2) INIBIN_V2_FLAGS {
            struct {
                bool uint32 : 1;
                bool float32 : 1;
                bool float8 : 1;
                bool uint16 : 1;
                bool uint8 : 1;
                bool bool1 : 1;
                bool uint8x3 : 1;
                bool float32x3 : 1;
                bool float8x2 : 1;
                bool float32x2 : 1;
                bool float8x3 : 1;
                bool float32x4 : 1;
                bool string : 1;
                bool unk : 3;
            };

            uint16_t value;
        };
        DRAGON_ASSERT(sizeof(inibin_v2_flags) == 2, "inibin_v2_flags size is not 2");
#pragma pack(pop)

#pragma pack(push, 1)
        struct {
            uint16_t blob_length  = 0;
            inibin_v2_flags flags = {};
        };
#pragma pack(pop)

        inline uint8_t get_inibin_version() override {
            return 2;
        }
    };
} // namespace yordle::data
