/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FloatingTextTypeList
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/FloatTextFormattingData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_FloatTextFormattingData
    struct FloatTextFormattingData;
#endif
    struct YORDLE_EXPORT FloatingTextTypeList : public bin_class {
        explicit FloatingTextTypeList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 46628140u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Invulnerable { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Special { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Heal { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ManaHeal { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ManaDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Dodge { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> PhysicalDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> MagicalDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> TrueDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Experience { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Gold { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Level { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Disable { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> QuestReceived { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> QuestComplete { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Score { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> PhysicalDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> MagicalDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> TrueDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyPhysicalDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyMagicalDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyTrueDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyPhysicalDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyMagicalDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> EnemyTrueDamageCritical { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Countdown { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> OMW { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Absorbed { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> Debug { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> PracticeToolTotal { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> PracticeToolLastHit { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> PracticeToolDPS { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ScoreDarkStar { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ScoreProject0 { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ScoreProject1 { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> ShieldBonusDamage { 585161597 };
        yordle::data::meta::bin_ref<yordle::data::meta::FloatTextFormattingData> TFTUnitLabel { 585161597 };
    };
}
#define YORDLE_META_DEF_FloatingTextTypeList
#endif
