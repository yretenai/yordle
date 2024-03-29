/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcc9e24e1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/BaseRigPoseModifierData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcc9e24e1 : public BaseRigPoseModifierData {
        explicit xcc9e24e1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3432916193u || BaseRigPoseModifierData::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash name = 0u;
        yordle::data::meta::bin_fnv_hash Joint = 0u;
        bool xd46d37b7 = true;
        float xdf7738d1 = 0.10000000149011612f;
        float x28ff849 = 2.5f;
        float xbb61b895 = 1.0f;
        bool x414d052 = false;
        bool x6dee491f = false;
        float maxAngle = 0.0f;
        float maxDistance = 0.0f;
        bool x316c9fa1 = false;
    };
}
#define YORDLE_META_DEF_xcc9e24e1
#endif
