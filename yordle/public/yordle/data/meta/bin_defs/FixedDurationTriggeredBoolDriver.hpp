/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FixedDurationTriggeredBoolDriver
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IDynamicMaterialBoolDriver
    struct IDynamicMaterialBoolDriver;
#endif
    struct YORDLE_EXPORT FixedDurationTriggeredBoolDriver : public IDynamicMaterialBoolDriver {
        explicit FixedDurationTriggeredBoolDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 62039180u || IDynamicMaterialBoolDriver::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::IDynamicMaterialBoolDriver> mBoolDriver {};
        float mCustomDuration = 0.0;
    };
}
#define YORDLE_META_DEF_FixedDurationTriggeredBoolDriver
#endif
