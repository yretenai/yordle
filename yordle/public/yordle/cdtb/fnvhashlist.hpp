//
// Created by yretenai on 2020-09-14.
//

#pragma once

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::cdtb {
    class YORDLE_EXPORT fnvhashlist : public hashlist<uint64_t> {
    public:
        explicit fnvhashlist(const dragon::Array<uint8_t> &buffer);

        void validate() override;
    };
} // namespace yordle::cdtb
