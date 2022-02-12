/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EffectCircleMaskCooldownElementData
#pragma once

#include <memory>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_defs/EffectElementData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT EffectCircleMaskCooldownElementData : public EffectElementData {
        explicit EffectCircleMaskCooldownElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4086628699u || EffectElementData::is_type(type);
        }

        std::array<uint8_t, 4> mEffectColor0 { 255, 255, 255, 255 };
        std::array<uint8_t, 4> mEffectColor1 { 255, 255, 255, 255 };
    };
}
#define YORDLE_META_DEF_EffectCircleMaskCooldownElementData
#endif
