/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4695505a
#pragma once

#include <memory>
#include <array>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4695505a : public bin_class {
        explicit x4695505a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1184190554u;
        }

        yordle::data::meta::bin_fnv_hash x9a40c29c = 0u;
        yordle::data::meta::bin_fnv_hash xb832d57c = 0u;
        yordle::data::meta::bin_fnv_hash x7711eaa0 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 3> xa8de2a34 { 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash x3bed63c6 = 0u;
        yordle::data::meta::bin_fnv_hash xae8a302d = 0u;
        yordle::data::meta::bin_fnv_hash x4c72d163 = 0u;
        yordle::data::meta::bin_fnv_hash x2ce1fd3a = 0u;
        float x511ce9e2 = 0.03999999910593033f;
        uint8_t minAlpha = 0u;
        uint8_t maxAlpha = 255u;
        float xad954dcd = 0.22499999403953552f;
        float xf21aa4eb = 0.20000000298023224f;
    };
}
#define YORDLE_META_DEF_x4695505a
#endif
