/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xc5f84705
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x7c402f20.hpp>
#include <yordle/data/meta/bin_defs/x705759a.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7c402f20
    struct x7c402f20;
#endif
    struct YORDLE_EXPORT xc5f84705 : public x705759a {
        explicit xc5f84705(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3321382661u || x705759a::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x7c402f20> burstData {};
        yordle::data::meta::bin_fnv_hash xcd8fd944 = 0u;
        yordle::data::meta::bin_fnv_hash xcf5d9d5b = 0u;
    };
}
#define YORDLE_META_DEF_xc5f84705
#endif
