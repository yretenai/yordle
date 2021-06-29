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
        xxhashlist() = default;
        explicit xxhashlist(dragon::Array<uint8_t> &buffer);

        void validate() override;
        static uint64_t hash(std::string str);
        [[nodiscard]] std::shared_ptr<hashlist<uint64_t>> restrict_bits(uint8_t bits) const override;
    };
} // namespace yordle::cdtb
