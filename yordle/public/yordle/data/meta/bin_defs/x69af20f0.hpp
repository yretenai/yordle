/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x69af20f0
#pragma once

#include <memory>
#include <vector>
#include <array>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x69af20f0 : public bin_class {
        explicit x69af20f0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1773084912u;
        }

        yordle::data::meta::bin_fnv_hash x628e91bc = 0u;
        yordle::data::meta::bin_fnv_hash x45cbd6de = 0u;
        std::vector<yordle::data::meta::bin_fnv_hash> x8ede41f4 {};
        yordle::data::meta::bin_fnv_hash xa08a6b31 = 0u;
        yordle::data::meta::bin_fnv_hash x44508cd7 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 3> x75b3e2ca { 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash xa8f5fd34 = 0u;
        yordle::data::meta::bin_fnv_hash x74359eae = 0u;
        int32_t x9c45981b = 0;
    };
}
#define YORDLE_META_DEF_x69af20f0
#endif
