/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb2feedb2
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x61c3629.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb2feedb2 : public x61c3629 {
        explicit xb2feedb2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3003051442u || x61c3629::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash xf5b8026a = 0u;
        yordle::data::meta::bin_fnv_hash xece4b81e = 0u;
    };
}
#define YORDLE_META_DEF_xb2feedb2
#endif
