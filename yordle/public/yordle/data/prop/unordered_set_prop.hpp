//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/set_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT unordered_set_prop : public set_prop {
    public:
        static constexpr prop_type TYPE = prop_type::unordered_set;

        explicit unordered_set_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : set_prop(buffer, ptr, version, key_hash) {
            type = prop_type::unordered_set;
        }
    };
} // namespace yordle::data::prop
