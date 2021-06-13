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
        [[nodiscard]] std::string get_string(uint64_t hash) const override;
        [[nodiscard]] std::filesystem::path get_path(uint64_t hash) const override;
        void combine(hashlist<uint64_t> &hashlist) override;
    };
} // namespace yordle::cdtb
