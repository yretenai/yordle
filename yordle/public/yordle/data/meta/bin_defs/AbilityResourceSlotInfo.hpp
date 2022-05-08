/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AbilityResourceSlotInfo
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT AbilityResourceSlotInfo : public bin_class {
        explicit AbilityResourceSlotInfo(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3459369333u;
        }

        uint8_t arType = 2u;
        float arBase = 100.0f;
        float arPerLevel = 0.0f;
        float arBaseStaticRegen = 1.0f;
        float arBaseFactorRegen = 0.0f;
        float arRegenPerLevel = 0.0f;
        float arIncrements = 0.0f;
        int32_t arMaxSegments = 0;
        bool arHasRegenText = true;
        bool arAllowMaxValueToBeOverridden = false;
        bool arPreventRegenWhileAtZero = false;
        bool arDisplayAsPips = false;
        bool arIsShown = true;
        bool arIsShownOnlyOnLocalPlayer = false;
        std::string arOverrideSmallPipName {};
        std::string arOverrideMediumPipName {};
        std::string arOverrideLargePipName {};
        std::string arOverrideEmptyPipName {};
        std::string arOverrideSpacerName {};
        bool arNegativeSpacer = false;
        bool xa9d3a87c = false;
        bool x5ca738c0 = false;
    };
}
#define YORDLE_META_DEF_AbilityResourceSlotInfo
#endif
