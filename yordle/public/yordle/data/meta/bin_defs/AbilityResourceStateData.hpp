/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AbilityResourceStateData
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/AbilityResourceStateColorOptions.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AbilityResourceStateColorOptions
    struct AbilityResourceStateColorOptions;
#endif
    struct YORDLE_EXPORT AbilityResourceStateData : public bin_class {
        explicit AbilityResourceStateData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2001592274u;
        }

        std::shared_ptr<yordle::data::meta::AbilityResourceStateColorOptions> DefaultPalette {};
        std::shared_ptr<yordle::data::meta::AbilityResourceStateColorOptions> ColorblindPalette {};
        std::string textureSuffix {};
        std::string animationSuffix {};
    };
}
#define YORDLE_META_DEF_AbilityResourceStateData
#endif