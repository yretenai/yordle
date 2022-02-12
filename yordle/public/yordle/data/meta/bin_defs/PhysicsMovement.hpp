/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_PhysicsMovement
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT PhysicsMovement : public MissileMovementSpec {
        explicit PhysicsMovement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 470290435u || MissileMovementSpec::is_type(type);
        }

        float mLifetime = 0.0;
        float mInitialSpeed = 0.0;
        float mDrag = 1.0;
        bool mWallSliding = false;
        float xca771747 = 1.0;
    };
}
#define YORDLE_META_DEF_PhysicsMovement
#endif
