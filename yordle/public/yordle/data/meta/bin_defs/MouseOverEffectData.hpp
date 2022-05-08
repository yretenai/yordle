/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MouseOverEffectData
#pragma once

#include <memory>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT MouseOverEffectData : public bin_class {
        explicit MouseOverEffectData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4069567955u;
        }

        std::array<uint8_t, 4> mAllyColor { 255, 0, 0, 255 };
        std::array<uint8_t, 4> mEnemyColor { 0, 0, 255, 255 };
        std::array<uint8_t, 4> mNeutralColor { 255, 255, 255, 255 };
        std::array<uint8_t, 4> mSelfColor { 0, 255, 0, 255 };
        std::array<float, 4> mInteractionTimes { 0.0f, 0.0f, 0.0f, 0.0f };
        std::array<int32_t, 4> mInteractionSizes { 1, 1, 1, 1 };
        int32_t mMouseOverSize = 1;
        float mMouseOverColorFactor = 0.5f;
        uint32_t mMouseOverBlurPassCount = 1u;
        int32_t mSelectedSize = 1;
        float mSelectedColorFactor = 0.5f;
        uint32_t mSelectedBlurPassCount = 1u;
        int32_t mAvatarSize = 1;
        float mAvatarColorFactor = 0.5f;
        std::array<uint8_t, 4> mAvatarColor { 0, 255, 255, 255 };
        uint32_t mAvatarBlurPassCount = 1u;
        int32_t mKillerSize = 1;
        float mKillerColorFactor = 0.5f;
        uint32_t mKillerBlurPassCount = 1u;
    };
}
#define YORDLE_META_DEF_MouseOverEffectData
#endif
