/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x696a421b
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x9c638700.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x9c638700
    struct x9c638700;
#endif
    struct YORDLE_EXPORT x696a421b : public bin_class {
        explicit x696a421b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1768571419u;
        }

        yordle::data::meta::bin_fnv_hash x2d1d21e = 0u;
        yordle::data::meta::bin_fnv_hash xbe72a198 = 0u;
        bool xe727f1b3 = false;
        yordle::data::meta::bin_fnv_hash NameText = 0u;
        std::shared_ptr<yordle::data::meta::x9c638700> x536405ec {};
    };
}
#define YORDLE_META_DEF_x696a421b
#endif
