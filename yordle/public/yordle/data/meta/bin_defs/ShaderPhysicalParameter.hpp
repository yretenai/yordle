/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ShaderPhysicalParameter
#pragma once

#include <memory>
#include <string>
#include <array>
#include <vector>

#include <yordle/data/meta/bin_defs/ShaderLogicalParameter.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ShaderLogicalParameter
    struct ShaderLogicalParameter;
#endif
    struct YORDLE_EXPORT ShaderPhysicalParameter : public bin_class {
        explicit ShaderPhysicalParameter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2171032536u;
        }

        std::string name {};
        std::array<float, 4> data { 0, 0, 0, 0 };
        std::vector<std::shared_ptr<yordle::data::meta::ShaderLogicalParameter>> logicalParameters {};
    };
}
#define YORDLE_META_DEF_ShaderPhysicalParameter
#endif
