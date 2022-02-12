/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EnterFOWVisibility
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MissileVisibilitySpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT EnterFOWVisibility : public MissileVisibilitySpec {
        explicit EnterFOWVisibility(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2461751699u || MissileVisibilitySpec::is_type(type);
        }

        bool mMissileClientExitFOWPrediction = false;
        bool mMissileClientWaitForTargetUpdateBeforeMissileShow = false;
    };
}
#define YORDLE_META_DEF_EnterFOWVisibility
#endif
