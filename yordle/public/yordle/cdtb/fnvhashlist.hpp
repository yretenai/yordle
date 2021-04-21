//
// Created by Lilith on 2020-09-14.
//

#pragma once

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::cdtb {
    class YORDLE_EXPORT fnvhashlist : public hashlist<uint64_t> {
    public:
        explicit fnvhashlist(std::istringstream stream);

        void validate() override;
    };
} // namespace yordle::cdtb
