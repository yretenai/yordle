/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MaterialInstanceDynamicSwitch
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IDynamicMaterialBoolDriver
    struct IDynamicMaterialBoolDriver;
#endif
    struct YORDLE_EXPORT MaterialInstanceDynamicSwitch : public bin_class {
        explicit MaterialInstanceDynamicSwitch(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1171267580u;
        }

        bool enabled = false;
        std::shared_ptr<yordle::data::meta::IDynamicMaterialBoolDriver> driver {};
    };
}
#define YORDLE_META_DEF_MaterialInstanceDynamicSwitch
#endif
