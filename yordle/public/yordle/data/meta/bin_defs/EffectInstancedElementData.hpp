/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EffectInstancedElementData
#pragma once

#include <memory>
#include <array>
#include <vector>

#include <yordle/data/meta/bin_defs/AtlasData.hpp>
#include <yordle/data/meta/bin_defs/EffectElementData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AtlasData
    struct AtlasData;
#endif
    struct YORDLE_EXPORT EffectInstancedElementData : public EffectElementData {
        explicit EffectInstancedElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2901870171u || EffectElementData::is_type(type);
        }

        bool mFlipX = false;
        bool mFlipY = false;
        bool mPerPixelUvsX = false;
        std::shared_ptr<yordle::data::meta::AtlasData> mAtlas {};
        std::vector<std::array<float, 2>> x71254c3b {};
    };
}
#define YORDLE_META_DEF_EffectInstancedElementData
#endif