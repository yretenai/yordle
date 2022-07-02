/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EffectAnimationElementData
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/AtlasData.hpp>
#include <yordle/data/meta/bin_defs/EffectElementData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AtlasData
    struct AtlasData;
#endif
    struct YORDLE_EXPORT EffectAnimationElementData : public EffectElementData {
        explicit EffectAnimationElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1913369002u || EffectElementData::is_type(type);
        }

        float FramesPerSecond = 0.0f;
        float TotalNumberOfFrames = 0.0f;
        float NumberOfFramesPerRowInAtlas = 0.0f;
        bool mFlipX = false;
        bool mFlipY = false;
        bool mPerPixelUvsX = false;
        std::shared_ptr<yordle::data::meta::AtlasData> mAtlas {};
        uint8_t mFinishBehavior = 0u;
    };
}
#define YORDLE_META_DEF_EffectAnimationElementData
#endif
