//
// Created by Naomi on 2022-01-29.
//

#pragma once

#include <cstdint>

namespace yordle::r3d {
    using tex_header_format = enum class TEX_HEADER_FORMAT : uint8_t {
        UNKNOWN0x1 = 1,
        UNKNOWN0x2 = 2,
        UNKNOWN0x3 = 3,
        BC1 = 10,
        BC3 = 12
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

    class YORDLE_EXPORT texture {
        // todo(naomi): texture

    public:
        tex_header header = {};
        uint8_t mips = 0;
        std::shared_ptr<dragon::Array<uint8_t>> surface_data = nullptr;

        [[nodiscard]] std::shared_ptr<dragon::Array<uint8_t>> get_surface(int surface, int mip) const {
            if(surface > header.surfaces) {
                return nullptr;
            }

            if(mip > mips) {
                return nullptr;
            }

            // todo(naomi): get surface data.
            return nullptr;
        }
    };
}
