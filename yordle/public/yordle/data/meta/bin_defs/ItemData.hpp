/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ItemData
#pragma once

#include <memory>
#include <string>
#include <vector>
#include <cstdint>
#include <map>

#include <yordle/data/meta/bin_defs/ItemGroup.hpp>
#include <yordle/data/meta/bin_defs/ItemAdviceAttribute.hpp>
#include <yordle/data/meta/bin_defs/ItemData.hpp>
#include <yordle/data/meta/bin_defs/ItemModifier.hpp>
#include <yordle/data/meta/bin_defs/ItemDataBuild.hpp>
#include <yordle/data/meta/bin_defs/ItemDataAvailability.hpp>
#include <yordle/data/meta/bin_defs/ItemDataValue.hpp>
#include <yordle/data/meta/bin_defs/x61f8c41c.hpp>
#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
#include <yordle/data/meta/bin_defs/ItemDataClient.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ItemGroup
    struct ItemGroup;
#endif

#ifndef YORDLE_META_DEF_ItemAdviceAttribute
    struct ItemAdviceAttribute;
#endif

#ifndef YORDLE_META_DEF_ItemData
    struct ItemData;
#endif

#ifndef YORDLE_META_DEF_ItemModifier
    struct ItemModifier;
#endif

#ifndef YORDLE_META_DEF_ItemDataBuild
    struct ItemDataBuild;
#endif

#ifndef YORDLE_META_DEF_ItemDataAvailability
    struct ItemDataAvailability;
#endif

#ifndef YORDLE_META_DEF_ItemDataValue
    struct ItemDataValue;
#endif

#ifndef YORDLE_META_DEF_x61f8c41c
    struct x61f8c41c;
#endif

#ifndef YORDLE_META_DEF_IGameCalculation
    struct IGameCalculation;
#endif

#ifndef YORDLE_META_DEF_ItemDataClient
    struct ItemDataClient;
#endif

#ifndef YORDLE_META_DEF_ResourceResolver
    struct ResourceResolver;
#endif
    struct YORDLE_EXPORT ItemData : public bin_class {
        explicit ItemData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 608970470u;
        }

        std::string mRequiredChampion {};
        std::string mRequiredAlly {};
        std::string mRequiredSpellName {};
        std::string mRequiredBuffCurrencyName {};
        std::vector<yordle::data::meta::bin_fnv_hash> mRequiredPurchaseIdentities {};
        std::string mDisabledDescriptionOverride {};
        std::string mParentEnchantmentGroup {};
        std::string mDeathRecapName {};
        int32_t mRequiredLevel = 0;
        int32_t itemID = 0;
        int32_t maxStack = 0;
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemGroup>> mItemGroups {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemAdviceAttribute>> mItemAdviceAttributes {};
        yordle::data::meta::bin_fnv_hash itemVOGroup = 0u;
        int32_t price = 0;
        int32_t mRequiredBuffCurrencyCost = 0;
        float mSidegradeCredit = 0.0;
        bool consumed = false;
        bool usableInStore = false;
        bool consumeOnAcquire = false;
        bool mItemCalloutPlayer = false;
        bool mItemCalloutSpectator = false;
        uint8_t clearUndoHistory = 1u;
        bool mCanBeSold = false;
        bool mHiddenFromOpponents = false;
        bool mIsEnchantment = false;
        int32_t specialRecipe = 0;
        uint8_t epicness = 2u;
        uint8_t SecondaryEpicness = 0u;
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemData>> recipeItemLinks {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemData>> requiredItemLinks {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemData>> sidegradeItemLinks {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ItemModifier>> mItemModifiers {};
        std::vector<std::string> mScripts {};
        yordle::data::meta::bin_ref<yordle::data::meta::ItemData> parentEnchantmentLink { 608970470 };
        yordle::data::meta::bin_ref<yordle::data::meta::ItemData> parentItemLink { 608970470 };
        float mFlatCooldownMod = 0.0;
        float mPercentCooldownMod = 0.0;
        float mAbilityHasteMod = 0.0;
        float mFlatHPPoolMod = 0.0;
        float mPercentHPPoolMod = 0.0;
        float mFlatHPRegenMod = 0.0;
        float mPercentHPRegenMod = 0.0;
        float mPercentBaseHPRegenMod = 0.0;
        float mPercentTenacityItemMod = 0.0;
        float mPercentSlowResistMod = 0.0;
        float mFlatMovementSpeedMod = 0.0;
        float mPercentMovementSpeedMod = 0.0;
        float mPercentMultiplicativeMovementSpeedMod = 0.0;
        float mFlatArmorMod = 0.0;
        float mPercentArmorMod = 0.0;
        float mFlatArmorPenetrationMod = 0.0;
        float mPercentArmorPenetrationMod = 0.0;
        float mPercentBonusArmorPenetrationMod = 0.0;
        float mFlatMagicPenetrationMod = 0.0;
        float mPercentMagicPenetrationMod = 0.0;
        float mPercentBonusMagicPenetrationMod = 0.0;
        float mFlatSpellBlockMod = 0.0;
        float mPercentSpellBlockMod = 0.0;
        float mFlatDodgeMod = 0.0;
        float mFlatCritChanceMod = 0.0;
        float mFlatMissChanceMod = 0.0;
        float mFlatCritDamageMod = 0.0;
        float mPercentCritDamageMod = 0.0;
        float mFlatPhysicalDamageMod = 0.0;
        float mPercentPhysicalDamageMod = 0.0;
        float mFlatMagicDamageMod = 0.0;
        float mPercentMagicDamageMod = 0.0;
        float mFlatPhysicalReduction = 0.0;
        float mPercentPhysicalReduction = 0.0;
        float mFlatMagicReduction = 0.0;
        float mPercentMagicReduction = 0.0;
        float mPercentEXPBonus = 0.0;
        float mFlatAttackRangeMod = 0.0;
        float mPercentAttackRangeMod = 0.0;
        float mFlatCastRangeMod = 0.0;
        float mPercentCastRangeMod = 0.0;
        float mPercentAttackSpeedMod = 0.0;
        float mPercentMultiplicativeAttackSpeedMod = 0.0;
        float mPercentHealingAmountMod = 0.0;
        float mPercentLifeStealMod = 0.0;
        float mPercentSpellVampMod = 0.0;
        float PercentOmniVampMod = 0.0;
        float PercentPhysicalVampMod = 0.0;
        float mPercentSpellEffectivenessMod = 0.0;
        float mFlatBubbleRadiusMod = 0.0;
        float mPercentBubbleRadiusMod = 0.0;
        float sellBackModifier = 0.699999988079071;
        float mCooldownShowDisabledDuration = 0.0;
        float flatMPPoolMod = 0.0;
        float PercentMPPoolMod = 0.0;
        float flatMPRegenMod = 0.0;
        float PercentMPRegenMod = 0.0;
        float percentBaseMPRegenMod = 0.0;
        std::shared_ptr<yordle::data::meta::ItemDataBuild> mItemDataBuild {};
        std::shared_ptr<yordle::data::meta::ItemDataAvailability> mItemDataAvailability {};
        std::vector<std::string> mCategories {};
        int32_t mBuildDepth = 0;
        std::vector<std::shared_ptr<yordle::data::meta::ItemDataValue>> mDataValues {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::x61f8c41c>> xfb56608c {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::IGameCalculation>> mItemCalculations {};
        std::vector<uint8_t> mItemAttributes {};
        int32_t x224a3815 = 0;
        uint8_t xc01bb6dd = 0u;
        uint8_t x51265c89 = 0u;
        std::shared_ptr<yordle::data::meta::ItemDataClient> mItemDataClient {};
        std::shared_ptr<yordle::data::meta::ResourceResolver> mVFXResourceResolver {};
        std::string mDisplayName {};
        std::vector<float> mEffectAmount {};
        std::vector<float> mEnchantmentEffectAmount {};
        std::vector<float> mEffectByLevelAmount {};
        std::string spellName = "BaseSpell";
        bool clickable = false;
        bool mMajorActiveItem = false;
    };
}
#define YORDLE_META_DEF_ItemData
#endif