//
// Created by yretenai on 2020-09-09.
//

#pragma once

#include <cstdint>

namespace yordle::archive {
#pragma pack(push, 1)
    typedef enum class WAD_STORAGE_TYPE : uint8_t {
        Uncompressed = 0,
        Zlib = 1,
        Symlink = 2,
        Zstd = 3
    } wad_storage_type;
#pragma pack(pop)
} // namespace yordle::archive
