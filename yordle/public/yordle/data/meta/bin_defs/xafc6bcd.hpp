/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xafc6bcd
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/x1d6f8226.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x1d6f8226
    struct x1d6f8226;
#endif
    struct YORDLE_EXPORT xafc6bcd : public bin_class {
        explicit xafc6bcd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 184314829u;
        }

        yordle::data::meta::bin_fnv_hash Group = 0u;
        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash x2508673c = 0u;
        yordle::data::meta::bin_fnv_hash name = 0u;
        yordle::data::meta::bin_fnv_hash Count = 0u;
        yordle::data::meta::bin_fnv_hash x87e6fb7c = 0u;
        yordle::data::meta::bin_fnv_hash x262449ce = 0u;
        yordle::data::meta::bin_fnv_hash x7fd69d68 = 0u;
        yordle::data::meta::bin_fnv_hash x64788b9b = 0u;
        std::array<std::shared_ptr<yordle::data::meta::x1d6f8226>, 5> xf483e2e5 { nullptr, nullptr, nullptr, nullptr, nullptr };
    };
}
#define YORDLE_META_DEF_xafc6bcd
#endif
