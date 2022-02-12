/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TriggerOnDistanceFromCaster
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MissileTriggerSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TriggerOnDistanceFromCaster : public MissileTriggerSpec {
        explicit TriggerOnDistanceFromCaster(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2746720777u || MissileTriggerSpec::is_type(type);
        }

        float mDistance = 0.0;
    };
}
#define YORDLE_META_DEF_TriggerOnDistanceFromCaster
#endif