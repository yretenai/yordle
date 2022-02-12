/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GameModeMapData.hpp>

#include <yordle/data/meta/bin_defs/GameModeChampionList.hpp>
#include <yordle/data/meta/bin_defs/GameModeItemList.hpp>
#include <yordle/data/meta/bin_defs/ItemShopGameModeData.hpp>
#include <yordle/data/meta/bin_defs/AnnouncementMap.hpp>
#include <yordle/data/meta/bin_defs/NeutralTimers.hpp>
#include <yordle/data/meta/bin_defs/RenderStyleData.hpp>
#include <yordle/data/meta/bin_defs/FloatingTextOverride.hpp>
#include <yordle/data/meta/bin_defs/GlobalStatsUIData.hpp>
#include <yordle/data/meta/bin_defs/x15502626.hpp>
#include <yordle/data/meta/bin_defs/ExperienceCurveData.hpp>
#include <yordle/data/meta/bin_defs/ExperienceModData.hpp>
#include <yordle/data/meta/bin_defs/DeathTimes.hpp>
#include <yordle/data/meta/bin_defs/LoadScreenTipConfiguration.hpp>
#include <yordle/data/meta/bin_defs/MapLocatorArray.hpp>
#include <yordle/data/meta/bin_defs/PerkReplacementList.hpp>
#include <yordle/data/meta/bin_defs/MissionBuffData.hpp>
#include <yordle/data/meta/bin_defs/SurrenderData.hpp>
#include <yordle/data/meta/bin_defs/GameModeAutoItemPurchasingConfig.hpp>
#include <yordle/data/meta/bin_defs/ScriptDataObjectList.hpp>
#include <yordle/data/meta/bin_defs/GameModeConstants.hpp>
#include <yordle/data/meta/bin_defs/GameplayConfig.hpp>
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

yordle::data::meta::GameModeMapData::GameModeMapData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mModeName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3158795888u);
    if(ptr_mModeName != nullptr) {
        mModeName = ptr_mModeName->value;
    }

    auto ptr_mChampionLists = prop->cast_prop<yordle::data::prop::unordered_set_prop>(242939244u);
    if(ptr_mChampionLists != nullptr) {
        for(const auto &set_mChampionLists_entry : ptr_mChampionLists->value) {
            auto ptr_mChampionLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mChampionLists_entry);
            if(ptr_mChampionLists_entry != nullptr) {
                mChampionLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::GameModeChampionList>(2322891183u, ptr_mChampionLists_entry->value));
            }
        }
    }

    auto ptr_itemLists = prop->cast_prop<yordle::data::prop::unordered_set_prop>(1298046227u);
    if(ptr_itemLists != nullptr) {
        for(const auto &set_itemLists_entry : ptr_itemLists->value) {
            auto ptr_itemLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_itemLists_entry);
            if(ptr_itemLists_entry != nullptr) {
                itemLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::GameModeItemList>(401601815u, ptr_itemLists_entry->value));
            }
        }
    }

    auto ptr_mItemShopData = prop->cast_prop<yordle::data::prop::reference_prop>(2519132899u);
    if(ptr_mItemShopData != nullptr) {
        mItemShopData = yordle::data::meta::bin_ref<yordle::data::meta::ItemShopGameModeData>(4103435203u, ptr_mItemShopData->value);
    }

    auto ptr_xd32dd16e = prop->cast_prop<yordle::data::prop::string_prop>(3542995310u);
    if(ptr_xd32dd16e != nullptr) {
        xd32dd16e = ptr_xd32dd16e->value;
    }

    auto ptr_mRelativeColorization = prop->cast_prop<yordle::data::prop::bool_prop>(3788255821u);
    if(ptr_mRelativeColorization != nullptr) {
        mRelativeColorization = ptr_mRelativeColorization->value;
    }

    auto ptr_AnnouncementsMapping = prop->cast_prop<yordle::data::prop::reference_prop>(635771279u);
    if(ptr_AnnouncementsMapping != nullptr) {
        AnnouncementsMapping = yordle::data::meta::bin_ref<yordle::data::meta::AnnouncementMap>(224929220u, ptr_AnnouncementsMapping->value);
    }

    auto ptr_mNeutralTimersDisplay = prop->cast_prop<yordle::data::prop::reference_prop>(2378333997u);
    if(ptr_mNeutralTimersDisplay != nullptr) {
        mNeutralTimersDisplay = yordle::data::meta::bin_ref<yordle::data::meta::NeutralTimers>(1283176254u, ptr_mNeutralTimersDisplay->value);
    }

    auto ptr_mCursorConfig = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3834810340u);
    if(ptr_mCursorConfig != nullptr) {
        mCursorConfig = ptr_mCursorConfig->value;
    }

    auto ptr_mCursorConfigUpdate = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4115552613u);
    if(ptr_mCursorConfigUpdate != nullptr) {
        mCursorConfigUpdate = ptr_mCursorConfigUpdate->value;
    }

    auto ptr_mLoadingScreenBackground = prop->cast_prop<yordle::data::prop::string_prop>(2640988148u);
    if(ptr_mLoadingScreenBackground != nullptr) {
        mLoadingScreenBackground = ptr_mLoadingScreenBackground->value;
    }

    auto ptr_mHudScoreData = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3646863737u);
    if(ptr_mHudScoreData != nullptr) {
        mHudScoreData = ptr_mHudScoreData->value;
    }

    auto ptr_mRenderStyle = prop->cast_prop<yordle::data::prop::reference_prop>(1948257549u);
    if(ptr_mRenderStyle != nullptr) {
        mRenderStyle = yordle::data::meta::bin_ref<yordle::data::meta::RenderStyleData>(4227680462u, ptr_mRenderStyle->value);
    }

    auto ptr_mFloatingTextOverride = prop->cast_prop<yordle::data::prop::reference_prop>(1845085589u);
    if(ptr_mFloatingTextOverride != nullptr) {
        mFloatingTextOverride = yordle::data::meta::bin_ref<yordle::data::meta::FloatingTextOverride>(1059987028u, ptr_mFloatingTextOverride->value);
    }

    auto ptr_mStatsUiData = prop->cast_prop<yordle::data::prop::reference_prop>(1519015945u);
    if(ptr_mStatsUiData != nullptr) {
        mStatsUiData = yordle::data::meta::bin_ref<yordle::data::meta::GlobalStatsUIData>(4087817779u, ptr_mStatsUiData->value);
    }

    auto ptr_x8bd9f7d8 = prop->cast_prop<yordle::data::prop::unordered_set_prop>(2346317784u);
    if(ptr_x8bd9f7d8 != nullptr) {
        for(const auto &set_x8bd9f7d8_entry : ptr_x8bd9f7d8->value) {
            auto ptr_x8bd9f7d8_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x8bd9f7d8_entry);
            if(ptr_x8bd9f7d8_entry != nullptr) {
                x8bd9f7d8.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::x15502626>(357574182u, ptr_x8bd9f7d8_entry->value));
            }
        }
    }

    auto ptr_mChampionIndicatorEnabled = prop->cast_prop<yordle::data::prop::bool_prop>(2041914701u);
    if(ptr_mChampionIndicatorEnabled != nullptr) {
        mChampionIndicatorEnabled = ptr_mChampionIndicatorEnabled->value;
    }

    auto ptr_ItemShopEnabled = prop->cast_prop<yordle::data::prop::bool_prop>(1551909767u);
    if(ptr_ItemShopEnabled != nullptr) {
        ItemShopEnabled = ptr_ItemShopEnabled->value;
    }

    auto ptr_xd1f0ef6 = prop->cast_prop<yordle::data::prop::unordered_set_prop>(220139254u);
    if(ptr_xd1f0ef6 != nullptr) {
        for(const auto &set_xd1f0ef6_entry : ptr_xd1f0ef6->value) {
            auto ptr_xd1f0ef6_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xd1f0ef6_entry);
            if(ptr_xd1f0ef6_entry != nullptr) {
                xd1f0ef6.emplace_back(ptr_xd1f0ef6_entry->value);
            }
        }
    }

    auto ptr_mExperienceCurveData = prop->cast_prop<yordle::data::prop::reference_prop>(4259458487u);
    if(ptr_mExperienceCurveData != nullptr) {
        mExperienceCurveData = yordle::data::meta::bin_ref<yordle::data::meta::ExperienceCurveData>(2482357264u, ptr_mExperienceCurveData->value);
    }

    auto ptr_mExperienceModData = prop->cast_prop<yordle::data::prop::reference_prop>(1682265312u);
    if(ptr_mExperienceModData != nullptr) {
        mExperienceModData = yordle::data::meta::bin_ref<yordle::data::meta::ExperienceModData>(4040137199u, ptr_mExperienceModData->value);
    }

    auto ptr_mDeathTimes = prop->cast_prop<yordle::data::prop::reference_prop>(3211873720u);
    if(ptr_mDeathTimes != nullptr) {
        mDeathTimes = yordle::data::meta::bin_ref<yordle::data::meta::DeathTimes>(319277549u, ptr_mDeathTimes->value);
    }

    auto ptr_mLoadScreenTipConfiguration = prop->cast_prop<yordle::data::prop::reference_prop>(1689397297u);
    if(ptr_mLoadScreenTipConfiguration != nullptr) {
        mLoadScreenTipConfiguration = yordle::data::meta::bin_ref<yordle::data::meta::LoadScreenTipConfiguration>(3188575920u, ptr_mLoadScreenTipConfiguration->value);
    }

    auto ptr_mMapLocators = prop->cast_prop<yordle::data::prop::reference_prop>(1456889581u);
    if(ptr_mMapLocators != nullptr) {
        mMapLocators = yordle::data::meta::bin_ref<yordle::data::meta::MapLocatorArray>(2902067178u, ptr_mMapLocators->value);
    }

    auto ptr_mPerkReplacements = prop->cast_prop<yordle::data::prop::inline_structure_prop>(665947137u);
    if(ptr_mPerkReplacements != nullptr) {
        mPerkReplacements = yordle::data::meta::deserialize<yordle::data::meta::PerkReplacementList>(ptr_mPerkReplacements, 2307915623u);
    }

    auto ptr_mMissionBuffData = prop->cast_prop<yordle::data::prop::reference_prop>(3386271259u);
    if(ptr_mMissionBuffData != nullptr) {
        mMissionBuffData = yordle::data::meta::bin_ref<yordle::data::meta::MissionBuffData>(4073390176u, ptr_mMissionBuffData->value);
    }

    auto ptr_mSurrenderSettings = prop->cast_prop<yordle::data::prop::reference_prop>(3906072283u);
    if(ptr_mSurrenderSettings != nullptr) {
        mSurrenderSettings = yordle::data::meta::bin_ref<yordle::data::meta::SurrenderData>(2687760845u, ptr_mSurrenderSettings->value);
    }

    auto ptr_x6941e612 = prop->cast_prop<yordle::data::prop::reference_prop>(1765926418u);
    if(ptr_x6941e612 != nullptr) {
        x6941e612 = yordle::data::meta::bin_ref<yordle::data::meta::GameModeAutoItemPurchasingConfig>(1773891178u, ptr_x6941e612->value);
    }

    auto ptr_x882a6450 = prop->cast_prop<yordle::data::prop::bool_prop>(2284479568u);
    if(ptr_x882a6450 != nullptr) {
        x882a6450 = ptr_x882a6450->value;
    }

    auto ptr_mScriptDataObjectLists = prop->cast_prop<yordle::data::prop::set_prop>(3273571353u);
    if(ptr_mScriptDataObjectLists != nullptr) {
        for(const auto &set_mScriptDataObjectLists_entry : ptr_mScriptDataObjectLists->value) {
            auto ptr_mScriptDataObjectLists_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mScriptDataObjectLists_entry);
            if(ptr_mScriptDataObjectLists_entry != nullptr) {
                mScriptDataObjectLists.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::ScriptDataObjectList>(3171701405u, ptr_mScriptDataObjectLists_entry->value));
            }
        }
    }

    auto ptr_mGameModeConstants = prop->cast_prop<yordle::data::prop::reference_prop>(885630574u);
    if(ptr_mGameModeConstants != nullptr) {
        mGameModeConstants = yordle::data::meta::bin_ref<yordle::data::meta::GameModeConstants>(201829573u, ptr_mGameModeConstants->value);
    }

    auto ptr_mGameplayConfig = prop->cast_prop<yordle::data::prop::reference_prop>(3712367922u);
    if(ptr_mGameplayConfig != nullptr) {
        mGameplayConfig = yordle::data::meta::bin_ref<yordle::data::meta::GameplayConfig>(3168105463u, ptr_mGameplayConfig->value);
    }

    auto ptr_xf74c67bb = prop->cast_prop<yordle::data::prop::string_prop>(4148979643u);
    if(ptr_xf74c67bb != nullptr) {
        xf74c67bb = ptr_xf74c67bb->value;
    }
}