/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd5c6d005
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd5c6d005 : public bin_class {
        explicit xd5c6d005(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3586576389u;
        }

        std::array<yordle::data::meta::bin_fnv_hash, 3> x909a63d3 { 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_xd5c6d005
#endif
