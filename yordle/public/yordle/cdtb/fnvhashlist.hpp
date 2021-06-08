//
// Created by Lilith on 2020-09-14.
//

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
        [[nodiscard]] std::string get_string(uint32_t hash) const override;
        [[nodiscard]] std::filesystem::path get_path(uint32_t hash) const override;
        void combine(hashlist<uint32_t> &hashlist) override;
    };
} // namespace yordle::cdtb
