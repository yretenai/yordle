#pragma once

#include <standard_dragon/Array.hpp>

#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT inline_structure_prop : public structure_prop {
    public:
        static constexpr prop_type TYPE = prop_type::inline_structure;

        explicit inline_structure_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t version, uint32_t key_hash) : structure_prop(buffer, ptr, version, key_hash, false) {
            type = prop_type::inline_structure;
        }
    };
} // namespace yordle::data::prop
