/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_StaticMaterialShaderParamDef
#pragma once

#include <memory>
#include <string>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT StaticMaterialShaderParamDef : public bin_class {
        explicit StaticMaterialShaderParamDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3729264367u;
        }

        std::string name {};
        std::array<float, 4> value { 0, 0, 0, 0 };
    };
}
#define YORDLE_META_DEF_StaticMaterialShaderParamDef
#endif