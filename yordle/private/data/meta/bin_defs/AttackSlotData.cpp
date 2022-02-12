/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AttackSlotData.hpp>

#include <yordle/data/meta/bin_defs/OverrideAutoAttackCastTimeData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::AttackSlotData::AttackSlotData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAttackTotalTime = prop->cast_prop<yordle::data::prop::optional_prop>(2576789951u);
    if(ptr_mAttackTotalTime != nullptr) {
        auto ptr_mAttackTotalTime_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mAttackTotalTime->value);
        if (ptr_mAttackTotalTime_opt != nullptr) {
            mAttackTotalTime = ptr_mAttackTotalTime_opt->value;
        }
    }

    auto ptr_mAttackCastTime = prop->cast_prop<yordle::data::prop::optional_prop>(731577330u);
    if(ptr_mAttackCastTime != nullptr) {
        auto ptr_mAttackCastTime_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mAttackCastTime->value);
        if (ptr_mAttackCastTime_opt != nullptr) {
            mAttackCastTime = ptr_mAttackCastTime_opt->value;
        }
    }

    auto ptr_mAttackDelayCastOffsetPercent = prop->cast_prop<yordle::data::prop::optional_prop>(4176959436u);
    if(ptr_mAttackDelayCastOffsetPercent != nullptr) {
        auto ptr_mAttackDelayCastOffsetPercent_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mAttackDelayCastOffsetPercent->value);
        if (ptr_mAttackDelayCastOffsetPercent_opt != nullptr) {
            mAttackDelayCastOffsetPercent = ptr_mAttackDelayCastOffsetPercent_opt->value;
        }
    }

    auto ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio = prop->cast_prop<yordle::data::prop::optional_prop>(3839254662u);
    if(ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio != nullptr) {
        auto ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio->value);
        if (ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio_opt != nullptr) {
            mAttackDelayCastOffsetPercentAttackSpeedRatio = ptr_mAttackDelayCastOffsetPercentAttackSpeedRatio_opt->value;
        }
    }

    auto ptr_mAttackProbability = prop->cast_prop<yordle::data::prop::optional_prop>(1567997819u);
    if(ptr_mAttackProbability != nullptr) {
        auto ptr_mAttackProbability_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mAttackProbability->value);
        if (ptr_mAttackProbability_opt != nullptr) {
            mAttackProbability = ptr_mAttackProbability_opt->value;
        }
    }

    auto ptr_mAttackName = prop->cast_prop<yordle::data::prop::optional_prop>(343796191u);
    if(ptr_mAttackName != nullptr) {
        auto ptr_mAttackName_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(ptr_mAttackName->value);
        if (ptr_mAttackName_opt != nullptr) {
            mAttackName = ptr_mAttackName_opt->value;
        }
    }

    auto ptr_mOverrideAutoattackCastTime = prop->cast_prop<yordle::data::prop::structure_prop>(369242801u);
    if(ptr_mOverrideAutoattackCastTime != nullptr) {
        mOverrideAutoattackCastTime = yordle::data::meta::deserialize<yordle::data::meta::OverrideAutoAttackCastTimeData>(ptr_mOverrideAutoattackCastTime, 3397751176u);
    }
}