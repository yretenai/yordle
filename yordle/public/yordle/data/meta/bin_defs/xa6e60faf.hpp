/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa6e60faf
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xc29c13e3.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xc29c13e3
    struct xc29c13e3;
#endif
    struct YORDLE_EXPORT xa6e60faf : public ViewController {
        explicit xa6e60faf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2800095151u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash CheatSet = 0u;
        yordle::data::meta::bin_fnv_hash xc1f16a2a = 0u;
        yordle::data::meta::bin_fnv_hash x2d5f962 = 0u;
        yordle::data::meta::bin_fnv_hash x73c8aba4 = 0u;
        std::shared_ptr<yordle::data::meta::xc29c13e3> buttonDefinition {};
        yordle::data::meta::bin_fnv_hash x5998be22 = 0u;
        yordle::data::meta::bin_fnv_hash x4eb7126b = 0u;
        yordle::data::meta::bin_fnv_hash xdee8167e = 0u;
        yordle::data::meta::bin_fnv_hash x2effec77 = 0u;
        float tooltipDelay = 0.10000000149011612;
        float groupDividerGapSize = 0.6000000238418579;
        uint8_t groupDividerIndex = 7u;
    };
}
#define YORDLE_META_DEF_xa6e60faf
#endif
