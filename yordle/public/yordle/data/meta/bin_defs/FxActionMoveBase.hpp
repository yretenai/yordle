/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FxActionMoveBase
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/x5c086dbd.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x5c086dbd
    struct x5c086dbd;
#endif
    struct YORDLE_EXPORT FxActionMoveBase : public IFxAction {
        explicit FxActionMoveBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1015511333u || IFxAction::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x5c086dbd> TargetObject {};
        uint8_t EasingType = 0u;
        float OvershootDistance = 0.0f;
        bool FaceVelocity = false;
    };
}
#define YORDLE_META_DEF_FxActionMoveBase
#endif
