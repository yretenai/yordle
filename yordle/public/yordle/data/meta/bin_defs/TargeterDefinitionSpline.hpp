/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TargeterDefinitionSpline
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_defs/DrawablePositionLocator.hpp>
#include <yordle/data/meta/bin_defs/FloatPerSpellLevel.hpp>
#include <yordle/data/meta/bin_defs/ISplineInfo.hpp>
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

#ifndef YORDLE_META_DEF_ISplineInfo
    struct ISplineInfo;
#endif
    struct YORDLE_EXPORT TargeterDefinitionSpline : public TargeterDefinition {
        explicit TargeterDefinitionSpline(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 669603267u || TargeterDefinition::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> startLocator {};
        std::shared_ptr<yordle::data::meta::DrawablePositionLocator> endLocator {};
        std::string baseTextureName {};
        std::string frontTextureName {};
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> splineWidth {};
        std::shared_ptr<yordle::data::meta::ISplineInfo> overrideSpline {};
        uint32_t minSegmentCount = 10u;
        float maxSegmentLength = 50.0f;
        bool isConstrainedToRange = false;
        std::shared_ptr<yordle::data::meta::FloatPerSpellLevel> constraintRange {};
    };
}
#define YORDLE_META_DEF_TargeterDefinitionSpline
#endif
