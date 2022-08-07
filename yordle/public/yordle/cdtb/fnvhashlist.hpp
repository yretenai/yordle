#pragma once

#include <yordle/cdtb/hashlist.hpp>
#include <yordle/yordle_export.h>

#include <standard_dragon/dragon.hpp>

namespace yordle::cdtb {
    class YORDLE_EXPORT fnvhashlist : public hashlist<uint32_t> {
    public:
        fnvhashlist() = default;
        explicit fnvhashlist(dragon::Array<uint8_t> &buffer);

        void validate() override;
        static uint32_t hash(std::string str);
        [[nodiscard]] std::shared_ptr<hashlist<uint32_t>> restrict_bits(uint8_t bits) const override;
    };
} // namespace yordle::cdtb
