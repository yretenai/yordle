//
// Created by yretenai on 2020-09-10.
//

#pragma once

#include <filesystem>
#include <map>

#include <yordle/yordle_export.h>
#include <yordle/cdtb/hashlist.hpp>

#include <standard_dragon/dragon.h>

namespace yordle::cdtb {
    class YORDLE_EXPORT xxhashlist : public hashlist<uint64_t> {
    public:
        explicit xxhashlist(const dragon::Array<uint8_t> &buffer);

        void validate() override;
    };
} // namespace yordle::cdtb
