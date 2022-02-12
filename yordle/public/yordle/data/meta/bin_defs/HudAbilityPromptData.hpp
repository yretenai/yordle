/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudAbilityPromptData
#pragma once

#include <memory>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT HudAbilityPromptData : public bin_class {
        explicit HudAbilityPromptData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4291825122u;
        }

        std::array<uint8_t, 4> PulseStartColor { 255, 255, 255, 255 };
        std::array<uint8_t, 4> PulseEndColor { 255, 255, 255, 255 };
        std::array<float, 2> pulseOffset { 0, 0 };
        float pulseTime = 0.25;
        float pulseInterval = 1.0;
    };
}
#define YORDLE_META_DEF_HudAbilityPromptData
#endif