/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4c7c2212
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4c7c2212 : public bin_class {
        explicit x4c7c2212(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1283203602u;
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 5> x243996f3 { 0u, 0u, 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash xc5a50e34 = 0u;
        yordle::data::meta::bin_fnv_hash x791a662d = 0u;
    };
}
#define YORDLE_META_DEF_x4c7c2212
#endif