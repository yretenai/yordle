/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb3e3401c
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/x973c5e4d.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x973c5e4d
    struct x973c5e4d;
#endif
    struct YORDLE_EXPORT xb3e3401c : public bin_class {
        explicit xb3e3401c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3018014748u;
        }

        std::shared_ptr<yordle::data::meta::x973c5e4d> x1bcf29d8 {};
        std::shared_ptr<yordle::data::meta::x973c5e4d> Target {};
        std::array<std::shared_ptr<yordle::data::meta::x973c5e4d>, 4> xfddf21be { nullptr, nullptr, nullptr, nullptr };
        yordle::data::meta::bin_fnv_hash x4babd89d = 0u;
        yordle::data::meta::bin_fnv_hash x456a1d88 = 0u;
        yordle::data::meta::bin_fnv_hash x93631881 = 0u;
        yordle::data::meta::bin_fnv_hash xc769c898 = 0u;
        yordle::data::meta::bin_fnv_hash xbc3936a4 = 0u;
        yordle::data::meta::bin_fnv_hash x207de4e8 = 0u;
        yordle::data::meta::bin_fnv_hash xe9a2c3b5 = 0u;
        yordle::data::meta::bin_fnv_hash xb07fadb1 = 0u;
    };
}
#define YORDLE_META_DEF_xb3e3401c
#endif
