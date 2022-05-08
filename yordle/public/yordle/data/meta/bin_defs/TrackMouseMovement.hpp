/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TrackMouseMovement
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TrackMouseMovement : public MissileMovementSpec {
        explicit TrackMouseMovement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1415088838u || MissileMovementSpec::is_type(type);
        }

        bool mInferDirectionFromFacingIfNeeded = true;
        bool mProjectTargetToCastRange = false;
        bool x99aa2d1f = false;
        bool mUseGroundHeightAtTarget = true;
        float mAcceleration = 0.0f;
        float mMinSpeed = 0.0f;
        float mMaxSpeed = 0.0f;
        float mInitialSpeed = 0.0f;
        std::array<float, 7> x84bb076a { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
        float x604989cf = 0.25f;
    };
}
#define YORDLE_META_DEF_TrackMouseMovement
#endif
