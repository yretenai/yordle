/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OverrideAttackTimeData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculation
    struct IGameCalculation;
#endif
    struct YORDLE_EXPORT OverrideAttackTimeData : public bin_class {
        explicit OverrideAttackTimeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1471545228u;
        }

        std::shared_ptr<yordle::data::meta::IGameCalculation> x20991541 {};
        float mCastTimePercent = 0.6000000238418579;
        bool x278d2a22 = true;
    };
}
#define YORDLE_META_DEF_OverrideAttackTimeData
#endif
