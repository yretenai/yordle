/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GameplayConfig.hpp>

#include <yordle/data/meta/bin_defs/CCScoreMultipliers.hpp>
#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
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

yordle::data::meta::GameplayConfig::GameplayConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSpellPostponeTimeoutSec = prop->cast_prop<yordle::data::prop::float32_prop>(2074318308u);
    if(ptr_mSpellPostponeTimeoutSec != nullptr) {
        mSpellPostponeTimeoutSec = ptr_mSpellPostponeTimeoutSec->value;
    }

    auto ptr_mAutoAttackMinPreCastLockoutDeltaTimeSec = prop->cast_prop<yordle::data::prop::float32_prop>(2561598034u);
    if(ptr_mAutoAttackMinPreCastLockoutDeltaTimeSec != nullptr) {
        mAutoAttackMinPreCastLockoutDeltaTimeSec = ptr_mAutoAttackMinPreCastLockoutDeltaTimeSec->value;
    }

    auto ptr_mAutoAttackMinPostCastLockoutDeltaTimeSec = prop->cast_prop<yordle::data::prop::float32_prop>(3263509469u);
    if(ptr_mAutoAttackMinPostCastLockoutDeltaTimeSec != nullptr) {
        mAutoAttackMinPostCastLockoutDeltaTimeSec = ptr_mAutoAttackMinPostCastLockoutDeltaTimeSec->value;
    }

    auto ptr_mLethalityPercentGivenAtLevel0 = prop->cast_prop<yordle::data::prop::float32_prop>(1189221507u);
    if(ptr_mLethalityPercentGivenAtLevel0 != nullptr) {
        mLethalityPercentGivenAtLevel0 = ptr_mLethalityPercentGivenAtLevel0->value;
    }

    auto ptr_mLethalityScalesToLevel = prop->cast_prop<yordle::data::prop::int32_prop>(2426136726u);
    if(ptr_mLethalityScalesToLevel != nullptr) {
        mLethalityScalesToLevel = ptr_mLethalityScalesToLevel->value;
    }

    auto ptr_mLethalityScalesCapsAtLevel = prop->cast_prop<yordle::data::prop::int32_prop>(1294549913u);
    if(ptr_mLethalityScalesCapsAtLevel != nullptr) {
        mLethalityScalesCapsAtLevel = ptr_mLethalityScalesCapsAtLevel->value;
    }

    auto ptr_mLethalityRatioFromTarget = prop->cast_prop<yordle::data::prop::float32_prop>(3860608716u);
    if(ptr_mLethalityRatioFromTarget != nullptr) {
        mLethalityRatioFromTarget = ptr_mLethalityRatioFromTarget->value;
    }

    auto ptr_mLethalityRatioFromAttacker = prop->cast_prop<yordle::data::prop::float32_prop>(1073304890u);
    if(ptr_mLethalityRatioFromAttacker != nullptr) {
        mLethalityRatioFromAttacker = ptr_mLethalityRatioFromAttacker->value;
    }

    auto ptr_AbilityHasteMax = prop->cast_prop<yordle::data::prop::float32_prop>(3096181938u);
    if(ptr_AbilityHasteMax != nullptr) {
        AbilityHasteMax = ptr_AbilityHasteMax->value;
    }

    auto ptr_mCritTotalArmorPenPercent = prop->cast_prop<yordle::data::prop::float32_prop>(1657146057u);
    if(ptr_mCritTotalArmorPenPercent != nullptr) {
        mCritTotalArmorPenPercent = ptr_mCritTotalArmorPenPercent->value;
    }

    auto ptr_mCritBonusArmorPenPercent = prop->cast_prop<yordle::data::prop::float32_prop>(351901930u);
    if(ptr_mCritBonusArmorPenPercent != nullptr) {
        mCritBonusArmorPenPercent = ptr_mCritBonusArmorPenPercent->value;
    }

    auto ptr_mCritGlobalDamageMultiplier = prop->cast_prop<yordle::data::prop::float32_prop>(127833845u);
    if(ptr_mCritGlobalDamageMultiplier != nullptr) {
        mCritGlobalDamageMultiplier = ptr_mCritGlobalDamageMultiplier->value;
    }

    auto ptr_mAdaptiveForceAbilityPowerScale = prop->cast_prop<yordle::data::prop::float32_prop>(2905483848u);
    if(ptr_mAdaptiveForceAbilityPowerScale != nullptr) {
        mAdaptiveForceAbilityPowerScale = ptr_mAdaptiveForceAbilityPowerScale->value;
    }

    auto ptr_mAdaptiveForceAttackDamageScale = prop->cast_prop<yordle::data::prop::float32_prop>(2705888682u);
    if(ptr_mAdaptiveForceAttackDamageScale != nullptr) {
        mAdaptiveForceAttackDamageScale = ptr_mAdaptiveForceAttackDamageScale->value;
    }

    auto ptr_mMinionDeathDelay = prop->cast_prop<yordle::data::prop::float32_prop>(2114953727u);
    if(ptr_mMinionDeathDelay != nullptr) {
        mMinionDeathDelay = ptr_mMinionDeathDelay->value;
    }

    auto ptr_mMinionAutoLeeway = prop->cast_prop<yordle::data::prop::float32_prop>(1376872132u);
    if(ptr_mMinionAutoLeeway != nullptr) {
        mMinionAutoLeeway = ptr_mMinionAutoLeeway->value;
    }

    auto ptr_mMinionAAHelperLimit = prop->cast_prop<yordle::data::prop::float32_prop>(2590579819u);
    if(ptr_mMinionAAHelperLimit != nullptr) {
        mMinionAAHelperLimit = ptr_mMinionAAHelperLimit->value;
    }

    auto ptr_mItemSellQueueTime = prop->cast_prop<yordle::data::prop::float32_prop>(2629334123u);
    if(ptr_mItemSellQueueTime != nullptr) {
        mItemSellQueueTime = ptr_mItemSellQueueTime->value;
    }

    auto ptr_mCCScoreMultipliers = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1888351048u);
    if(ptr_mCCScoreMultipliers != nullptr) {
        mCCScoreMultipliers = yordle::data::meta::deserialize<yordle::data::meta::CCScoreMultipliers>(ptr_mCCScoreMultipliers, 2006398389u);
    }

    auto ptr_mPerSlotCDRIsAdditive = prop->cast_prop<yordle::data::prop::bool_prop>(3747866318u);
    if(ptr_mPerSlotCDRIsAdditive != nullptr) {
        mPerSlotCDRIsAdditive = ptr_mPerSlotCDRIsAdditive->value;
    }

    auto ptr_mSummonerSpells = prop->cast_prop<yordle::data::prop::set_prop>(2886103531u);
    if(ptr_mSummonerSpells != nullptr) {
        for(const auto &set_mSummonerSpells_entry : ptr_mSummonerSpells->value) {
            auto ptr_mSummonerSpells_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mSummonerSpells_entry);
            if(ptr_mSummonerSpells_entry != nullptr) {
                mSummonerSpells.emplace_back(ptr_mSummonerSpells_entry->value);
            }
        }
    }

    auto ptr_mLegacySummonerSpells = prop->cast_prop<yordle::data::prop::set_prop>(627629096u);
    if(ptr_mLegacySummonerSpells != nullptr) {
        for(const auto &set_mLegacySummonerSpells_entry : ptr_mLegacySummonerSpells->value) {
            auto ptr_mLegacySummonerSpells_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mLegacySummonerSpells_entry);
            if(ptr_mLegacySummonerSpells_entry != nullptr) {
                mLegacySummonerSpells.emplace_back(ptr_mLegacySummonerSpells_entry->value);
            }
        }
    }

    auto ptr_ItemsRolesPerRow = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1627693693u);
    if(ptr_ItemsRolesPerRow != nullptr) {
        ItemsRolesPerRow = ptr_ItemsRolesPerRow->value;
    }

    auto ptr_xa64802f2 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2789737202u);
    if(ptr_xa64802f2 != nullptr) {
        xa64802f2 = ptr_xa64802f2->value;
    }

    auto ptr_mBasicAttackCalculation = prop->cast_prop<yordle::data::prop::structure_prop>(518544983u);
    if(ptr_mBasicAttackCalculation != nullptr) {
        mBasicAttackCalculation = yordle::data::meta::deserialize<yordle::data::meta::IGameCalculation>(ptr_mBasicAttackCalculation, 389493299u);
    }
}
