/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TargeterDefinitionCone
#pragma once

#include <memory>
#include <cstdint>
#include <optional>
#include <string>

#include <yordle/data/meta/bin_defs/DrawablePositionLocator.hpp>
#include <yordle/data/meta/bin_defs/FloatPerSpellLevel.hpp>
#include <yordle/data/meta/bin_defs/TargeterDefinition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_DrawablePositionLocator
    struct DrawablePositionLocator;
#endif

#ifndef YORDLE_META_DEF_FloatPerSpellLevel
    struct FloatPerSpellLevel;
#endif
    struct YORDLE_EXPORT TargeterDefinitionCone : public TargeterDefinition {
        explicit TargeterDefinitionCone(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2281086721u || TargeterDefinition::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> startLocator {};
        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> endLocator {};
        uint32_t fallbackDirection = 1u;
        bool hasMaxGrowRange = false;
        bool coneFollowsEnd = false;
        std::optional<float> coneAngleDegrees {};
        std::optional<float> coneRange {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthStartTime {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthDuration {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthMax {};
        std::string textureConeOverrideName {};
        std::string textureConeMaxGrowName {};
    };
}
#define YORDLE_META_DEF_TargeterDefinitionCone
#endif
