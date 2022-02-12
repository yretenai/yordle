/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SpecificColorMaterialDriver
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/IDynamicMaterialDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT SpecificColorMaterialDriver : public IDynamicMaterialDriver {
        explicit SpecificColorMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1181419247u || IDynamicMaterialDriver::is_type(type);
        }

        std::array<float, 4> mColor { 1, 0, 0, 1 };
    };
}
#define YORDLE_META_DEF_SpecificColorMaterialDriver
#endif
