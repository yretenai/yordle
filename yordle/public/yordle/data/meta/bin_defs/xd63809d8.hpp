/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd63809d8
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x700d0136.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd63809d8 : public x700d0136 {
        explicit xd63809d8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3593996760u || x700d0136::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xf0d308f6 = 0u;
        yordle::data::meta::bin_fnv_hash xc96b5b85 = 0u;
    };
}
#define YORDLE_META_DEF_xd63809d8
#endif