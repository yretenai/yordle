/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IsAnimationPlayingDynamicMaterialBoolDriver
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IsAnimationPlayingDynamicMaterialBoolDriver : public IDynamicMaterialBoolDriver {
        explicit IsAnimationPlayingDynamicMaterialBoolDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 141658293u || IDynamicMaterialBoolDriver::is_type(type);
        }

        std::vector<yordle::data::meta::bin_fnv_hash> mAnimationNames {};
    };
}
#define YORDLE_META_DEF_IsAnimationPlayingDynamicMaterialBoolDriver
#endif
