/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AtomicClipData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/AnimationResourceData.hpp>
#include <yordle/data/meta/bin_defs/UpdaterResourceData.hpp>
#include <yordle/data/meta/bin_defs/BlendableClipData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AnimationResourceData
    struct AnimationResourceData;
#endif

#ifndef YORDLE_META_DEF_UpdaterResourceData
    struct UpdaterResourceData;
#endif
    struct YORDLE_EXPORT AtomicClipData : public BlendableClipData {
        explicit AtomicClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1540989414u || BlendableClipData::is_type(type);
        }

        float mTickDuration = 0.03333333507180214f;
        std::shared_ptr<yordle::data::meta::AnimationResourceData> mAnimationResourceData {};
        std::shared_ptr<yordle::data::meta::UpdaterResourceData> mUpdaterResourceData {};
        float startFrame = 0.0f;
        float xbd8e2d9b = -1.0f;
    };
}
#define YORDLE_META_DEF_AtomicClipData
#endif
