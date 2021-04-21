//
// Created by Lilith on 2020-09-10.
//

#pragma once

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::cdtb {
    class YORDLE_EXPORT xxhashlist : public hashlist<uint64_t> {
    public:
        explicit xxhashlist(std::istringstream stream);

        void validate() override;
    };
} // namespace yordle::cdtb
