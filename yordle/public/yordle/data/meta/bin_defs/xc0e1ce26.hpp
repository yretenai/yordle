/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xc0e1ce26
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x8314a414.hpp>
#include <yordle/data/meta/bin_defs/x811882fd.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x8314a414
    struct x8314a414;
#endif
    struct YORDLE_EXPORT xc0e1ce26 : public x811882fd {
        explicit xc0e1ce26(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3236023846u || x811882fd::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x8314a414> x87c9dd2d {};
        std::shared_ptr<yordle::data::meta::x8314a414> x789d2ea5 {};
        yordle::data::meta::bin_fnv_hash xe8e0dd0b = 0u;
    };
}
#define YORDLE_META_DEF_xc0e1ce26
#endif
