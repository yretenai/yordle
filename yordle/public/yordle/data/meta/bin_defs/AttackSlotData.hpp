/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AttackSlotData
#pragma once

#include <memory>
#include <optional>
#include <string>

#include <yordle/data/meta/bin_defs/OverrideAutoAttackCastTimeData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_OverrideAutoAttackCastTimeData
    struct OverrideAutoAttackCastTimeData;
#endif
    struct YORDLE_EXPORT AttackSlotData : public bin_class {
        explicit AttackSlotData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 112014489u;
        }

        std::optional<float> mAttackTotalTime {};
        std::optional<float> mAttackCastTime {};
        std::optional<float> mAttackDelayCastOffsetPercent {};
        std::optional<float> mAttackDelayCastOffsetPercentAttackSpeedRatio {};
        std::optional<float> mAttackProbability {};
        std::optional<std::string> mAttackName {};
        std::shared_ptr<yordle::data::meta::OverrideAutoAttackCastTimeData> mOverrideAutoattackCastTime {};
    };
}
#define YORDLE_META_DEF_AttackSlotData
#endif