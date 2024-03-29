/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudLevelUpData
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT HudLevelUpData : public bin_class {
        explicit HudLevelUpData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2124320233u;
        }

        uint8_t minAlpha = 0u;
        uint8_t maxAlpha = 255u;
        float maxOffset = 0.0;
        float animTime = 1.0;
        float delay = 0.0;
        float overshoot = 0.5;
        float inertia = 0.5;
        float playerBuffsOffset = 59.0;
        float idleSheenInterval = 1.0;
    };
}
#define YORDLE_META_DEF_HudLevelUpData
#endif
