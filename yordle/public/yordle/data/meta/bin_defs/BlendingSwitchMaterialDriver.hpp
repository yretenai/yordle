/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BlendingSwitchMaterialDriver
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/SwitchMaterialDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT BlendingSwitchMaterialDriver : public SwitchMaterialDriver {
        explicit BlendingSwitchMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1459861871u || SwitchMaterialDriver::is_type(type);
        }

        float mBlendTime = 1.0;
        std::vector<float> mOverrideBlendTimes {};
    };
}
#define YORDLE_META_DEF_BlendingSwitchMaterialDriver
#endif