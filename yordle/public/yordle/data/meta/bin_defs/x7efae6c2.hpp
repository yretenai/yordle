/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7efae6c2
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x7efae6c2 : public bin_class {
        explicit x7efae6c2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2130372290u;
        }

        std::array<yordle::data::meta::bin_fnv_hash, 5> x4dfb4672 { 0u, 0u, 0u, 0u, 0u };
        std::array<yordle::data::meta::bin_fnv_hash, 5> x68931d61 { 0u, 0u, 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_x7efae6c2
#endif
