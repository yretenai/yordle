#pragma once

#include <cstdint>

#include <standard_dragon/macros.hpp>
#include <standard_dragon/Array.hpp>

#include <yordle/yordle_export.h>

namespace yordle::r3d {
    using tex_header_format = enum class TEX_HEADER_FORMAT : uint8_t {
        UNKNOWN0x1 = 1,
        UNKNOWN0x2 = 2,
        UNKNOWN0x3 = 3,
        BC1        = 10,
        BC3        = 12,
        RGBA8      = 20
    };

    using tex_header_v1 = struct TEX_HEADER_V1 {
        uint32_t fourcc;
        uint16_t width;
        uint16_t height;
        uint8_t surfaces; // assumption
        tex_header_format format;
        uint8_t unknown0xA;
        bool has_mips;
    };

    using tex_header = tex_header_v1;

    class texture {
    public:
        tex_header header                                    = {};
        uint8_t mips                                         = 1;
        uint32_t bpp                                         = 1;
        uint32_t ppb                                         = 1;
        std::shared_ptr<dragon::Array<uint8_t>> surface_data = nullptr;

        static constexpr uint32_t MAGIC = DRAGON_MAGIC32('T', 'E', 'X', 0);

        ~texture() = default;
        explicit texture() = default;
        explicit texture(const std::shared_ptr<dragon::Array<uint8_t>>& buffer) {
            uintptr_t offset = 4;
            header = buffer->lpcast<tex_header>(offset);

            if (header.has_mips) {
                mips = (uint8_t) log2(header.width > header.height ? header.width : header.height);
            }

            switch (header.format) {
                case tex_header_format::BC1:
                    bpp = 64;
                    ppb = 16;
                    break;
                case tex_header_format::BC3:
                    bpp = 128;
                    ppb = 16;
                    break;
                case r3d::tex_header_format::UNKNOWN0x1:
                case r3d::tex_header_format::UNKNOWN0x2:
                case r3d::tex_header_format::UNKNOWN0x3:
                    bpp = 1;
                    break;
                case r3d::tex_header_format::RGBA8:
                    bpp = 32;
                    break;
            }

            auto size = 0u;
            auto mask = (header.width * header.height / ppb * bpp) >> 3;
            for (auto i = 0; i < mips; ++i) {
                size ^= mask;
                mask >>= 2;
            }

            surface_data = std::make_shared<dragon::Array<uint8_t>>(buffer->data() + offset, size);

        }

        [[nodiscard]] std::shared_ptr<dragon::Array<uint8_t>> get_surface(int surface, int mip) const {
            if (surface > header.surfaces) {
                return nullptr;
            }

            if (mip > mips) {
                return nullptr;
            }

            if(surface == 0 && mip == 0) {
                return mips <= 1 ? surface_data : std::make_shared<dragon::Array<uint8_t>>(surface_data, surface_data->Length - (header.width * header.height / ppb * bpp));
            }

            // todo: mip calc
            return nullptr;
        }
    };
} // namespace yordle::r3d
