/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TargeterDefinitionLine
#pragma once

#include <memory>
#include <cstdint>
#include <optional>
#include <string>

#include <yordle/data/meta/bin_defs/ILineIndicatorType.hpp>
#include <yordle/data/meta/bin_defs/DrawablePositionLocator.hpp>
#include <yordle/data/meta/bin_defs/FloatPerSpellLevel.hpp>
#include <yordle/data/meta/bin_defs/TargeterDefinition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ILineIndicatorType
    struct ILineIndicatorType;
#endif

#ifndef YORDLE_META_DEF_DrawablePositionLocator
    struct DrawablePositionLocator;
#endif

#ifndef YORDLE_META_DEF_FloatPerSpellLevel
    struct FloatPerSpellLevel;
#endif
    struct YORDLE_EXPORT TargeterDefinitionLine : public TargeterDefinition {
        explicit TargeterDefinitionLine(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 872611392u || TargeterDefinition::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::ILineIndicatorType> indicatorType {};
        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> startLocator {};
        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> endLocator {};
        uint32_t fallbackDirection = 1u;
        bool alwaysDraw = false;
        bool hasMaxGrowRange = false;
        bool useGlobalLineIndicator = false;
        std::optional<bool> lineStopsAtEndPosition {};
        float minimumDisplayedRange = 50.0;
        float arrowSize = 0.0;
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> lineWidth {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> overrideBaseRange {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthStartTime {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthDuration {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> rangeGrowthMax {};
        std::string textureBaseOverrideName {};
        std::string textureTargetOverrideName {};
        std::string textureBaseMaxGrowName {};
        std::string textureTargetMaxGrowName {};
        bool mAngleLineToEndpointHeight = false;
        bool mCenterArrowToEndPoint = false;
        bool facingLine = false;
        float minAngleRangeFactor = 1.0;
        float maxAngleRangeFactor = 1.0;
        bool Fade = true;
        float minAngle = 0.0;
        float maxAngle = 180.0;
        float fadeAngle = 0.0;
    };
}
#define YORDLE_META_DEF_TargeterDefinitionLine
#endif
