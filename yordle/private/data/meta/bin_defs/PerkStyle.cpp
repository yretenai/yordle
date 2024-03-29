/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/PerkStyle.hpp>

#include <yordle/data/meta/bin_defs/PerkSubStyleBonus.hpp>
#include <yordle/data/meta/bin_defs/PerkSlot.hpp>
#include <yordle/data/meta/bin_defs/PerkScript.hpp>
#include <yordle/data/meta/bin_defs/PerkBuff.hpp>
#include <yordle/data/meta/bin_defs/DefaultSplashedPerkStyle.hpp>
#include <yordle/data/meta/bin_defs/Perk.hpp>
#include <yordle/data/meta/bin_defs/DefaultStatModPerkSet.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
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

yordle::data::meta::PerkStyle::PerkStyle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mPerkStyleId = prop->cast_prop<yordle::data::prop::uint32_prop>(2664844788u);
    if(ptr_mPerkStyleId != nullptr) {
        mPerkStyleId = ptr_mPerkStyleId->value;
    }

    auto ptr_mPerkStyleName = prop->cast_prop<yordle::data::prop::string_prop>(1908853018u);
    if(ptr_mPerkStyleName != nullptr) {
        mPerkStyleName = ptr_mPerkStyleName->value;
    }

    auto ptr_mDisplayNameLocalizationKey = prop->cast_prop<yordle::data::prop::string_prop>(765720767u);
    if(ptr_mDisplayNameLocalizationKey != nullptr) {
        mDisplayNameLocalizationKey = ptr_mDisplayNameLocalizationKey->value;
    }

    auto ptr_mTooltipNameLocalizationKey = prop->cast_prop<yordle::data::prop::string_prop>(977481760u);
    if(ptr_mTooltipNameLocalizationKey != nullptr) {
        mTooltipNameLocalizationKey = ptr_mTooltipNameLocalizationKey->value;
    }

    auto ptr_mIconTextureName = prop->cast_prop<yordle::data::prop::string_prop>(1472102971u);
    if(ptr_mIconTextureName != nullptr) {
        mIconTextureName = ptr_mIconTextureName->value;
    }

    auto ptr_mDefaultPageLocalizationKey = prop->cast_prop<yordle::data::prop::string_prop>(2258702858u);
    if(ptr_mDefaultPageLocalizationKey != nullptr) {
        mDefaultPageLocalizationKey = ptr_mDefaultPageLocalizationKey->value;
    }

    auto ptr_mPingTextLocalizationKey = prop->cast_prop<yordle::data::prop::string_prop>(471669941u);
    if(ptr_mPingTextLocalizationKey != nullptr) {
        mPingTextLocalizationKey = ptr_mPingTextLocalizationKey->value;
    }

    auto ptr_mEnabled = prop->cast_prop<yordle::data::prop::bool_prop>(1239023785u);
    if(ptr_mEnabled != nullptr) {
        mEnabled = ptr_mEnabled->value;
    }

    auto ptr_mIsAdvancedStyle = prop->cast_prop<yordle::data::prop::bool_prop>(2921787927u);
    if(ptr_mIsAdvancedStyle != nullptr) {
        mIsAdvancedStyle = ptr_mIsAdvancedStyle->value;
    }

    auto ptr_mAllowedSubStyles = prop->cast_prop<yordle::data::prop::set_prop>(2274456244u);
    if(ptr_mAllowedSubStyles != nullptr) {
        for(const auto &set_mAllowedSubStyles_entry : ptr_mAllowedSubStyles->value) {
            auto ptr_mAllowedSubStyles_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_mAllowedSubStyles_entry);
            if(ptr_mAllowedSubStyles_entry != nullptr) {
                mAllowedSubStyles.emplace_back(ptr_mAllowedSubStyles_entry->value);
            }
        }
    }

    auto ptr_mSubStyleBonus = prop->cast_prop<yordle::data::prop::set_prop>(1720843154u);
    if(ptr_mSubStyleBonus != nullptr) {
        for(const auto &set_mSubStyleBonus_entry : ptr_mSubStyleBonus->value) {
            auto ptr_mSubStyleBonus_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mSubStyleBonus_entry);
            if(ptr_mSubStyleBonus_entry != nullptr) {
                mSubStyleBonus.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::PerkSubStyleBonus>(ptr_mSubStyleBonus_entry, 3127434961u));
            }
        }
    }

    auto ptr_mSlots = prop->cast_prop<yordle::data::prop::set_prop>(2443691253u);
    if(ptr_mSlots != nullptr) {
        for(const auto &set_mSlots_entry : ptr_mSlots->value) {
            auto ptr_mSlots_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mSlots_entry);
            if(ptr_mSlots_entry != nullptr) {
                mSlots.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::PerkSlot>(ptr_mSlots_entry, 232419497u));
            }
        }
    }

    auto ptr_mSlotlinks = prop->cast_prop<yordle::data::prop::set_prop>(2825020389u);
    if(ptr_mSlotlinks != nullptr) {
        for(const auto &set_mSlotlinks_entry : ptr_mSlotlinks->value) {
            auto ptr_mSlotlinks_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mSlotlinks_entry);
            if(ptr_mSlotlinks_entry != nullptr) {
                mSlotlinks.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::PerkSlot>(232419497u, ptr_mSlotlinks_entry->value));
            }
        }
    }

    auto ptr_mScript = prop->cast_prop<yordle::data::prop::structure_prop>(1160601547u);
    if(ptr_mScript != nullptr) {
        mScript = yordle::data::meta::deserialize<yordle::data::meta::PerkScript>(ptr_mScript, 501137906u);
    }

    auto ptr_mScriptAsSubStyle = prop->cast_prop<yordle::data::prop::structure_prop>(136287996u);
    if(ptr_mScriptAsSubStyle != nullptr) {
        mScriptAsSubStyle = yordle::data::meta::deserialize<yordle::data::meta::PerkScript>(ptr_mScriptAsSubStyle, 501137906u);
    }

    auto ptr_mBuffs = prop->cast_prop<yordle::data::prop::set_prop>(254459326u);
    if(ptr_mBuffs != nullptr) {
        for(const auto &set_mBuffs_entry : ptr_mBuffs->value) {
            auto ptr_mBuffs_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mBuffs_entry);
            if(ptr_mBuffs_entry != nullptr) {
                mBuffs.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::PerkBuff>(ptr_mBuffs_entry, 1031283364u));
            }
        }
    }

    auto ptr_mDefaultSplash = prop->cast_prop<yordle::data::prop::structure_prop>(2926079702u);
    if(ptr_mDefaultSplash != nullptr) {
        mDefaultSplash = yordle::data::meta::deserialize<yordle::data::meta::DefaultSplashedPerkStyle>(ptr_mDefaultSplash, 2405280373u);
    }

    auto ptr_mDefaultPerksWhenSplashed = prop->cast_prop<yordle::data::prop::set_prop>(1329530256u);
    if(ptr_mDefaultPerksWhenSplashed != nullptr) {
        for(const auto &set_mDefaultPerksWhenSplashed_entry : ptr_mDefaultPerksWhenSplashed->value) {
            auto ptr_mDefaultPerksWhenSplashed_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_mDefaultPerksWhenSplashed_entry);
            if(ptr_mDefaultPerksWhenSplashed_entry != nullptr) {
                mDefaultPerksWhenSplashed.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::Perk>(3069197533u, ptr_mDefaultPerksWhenSplashed_entry->value));
            }
        }
    }

    auto ptr_xfa4e9a2 = prop->cast_prop<yordle::data::prop::set_prop>(262465954u);
    if(ptr_xfa4e9a2 != nullptr) {
        for(const auto &set_xfa4e9a2_entry : ptr_xfa4e9a2->value) {
            auto ptr_xfa4e9a2_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xfa4e9a2_entry);
            if(ptr_xfa4e9a2_entry != nullptr) {
                xfa4e9a2.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::DefaultStatModPerkSet>(ptr_xfa4e9a2_entry, 3234822452u));
            }
        }
    }

    auto ptr_mStyleVFXResourceResolver = prop->cast_prop<yordle::data::prop::structure_prop>(3660239581u);
    if(ptr_mStyleVFXResourceResolver != nullptr) {
        mStyleVFXResourceResolver = yordle::data::meta::deserialize<yordle::data::meta::ResourceResolver>(ptr_mStyleVFXResourceResolver, 4013559603u);
    }

    auto ptr_mLCUAssetFileMap = prop->cast_prop<yordle::data::prop::map_prop>(3789342776u);
    if(ptr_mLCUAssetFileMap != nullptr) {
        for(const auto &set_mLCUAssetFileMap_pair : ptr_mLCUAssetFileMap->value) {
            auto ptr_mLCUAssetFileMap_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_mLCUAssetFileMap_pair.first);
            auto ptr_mLCUAssetFileMap_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_mLCUAssetFileMap_pair.second);
            if(ptr_mLCUAssetFileMap_key != nullptr && ptr_mLCUAssetFileMap_value != nullptr) {
                mLCUAssetFileMap.emplace(ptr_mLCUAssetFileMap_key->value, ptr_mLCUAssetFileMap_value->value);
            }
        }
    }
}
