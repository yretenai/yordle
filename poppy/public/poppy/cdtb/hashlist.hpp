//
// Created by yretenai on 2020-09-10.
//

#pragma once

#include <filesystem>
#include <map>

#include <poppy/poppy_export.h>

#include <standard_dragon/dragon.h>

namespace poppy::cdtb {
    class POPPY_EXPORT hashlist {
    public:
        explicit hashlist(const dragon::Array<uint8_t> &buffer);
        ~hashlist() = default;

        std::map<uint64_t, std::filesystem::path> hashes;
    };
} // namespace poppy::cdtb
