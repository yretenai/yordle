/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_PerkStyle
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <vector>
#include <map>

#include <yordle/data/meta/bin_defs/PerkSubStyleBonus.hpp>
#include <yordle/data/meta/bin_defs/PerkSlot.hpp>
#include <yordle/data/meta/bin_defs/PerkScript.hpp>
#include <yordle/data/meta/bin_defs/PerkBuff.hpp>
#include <yordle/data/meta/bin_defs/DefaultSplashedPerkStyle.hpp>
#include <yordle/data/meta/bin_defs/Perk.hpp>
#include <yordle/data/meta/bin_defs/DefaultStatModPerkSet.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_PerkSubStyleBonus
    struct PerkSubStyleBonus;
#endif

#ifndef YORDLE_META_DEF_PerkSlot
    struct PerkSlot;
#endif

#ifndef YORDLE_META_DEF_PerkScript
    struct PerkScript;
#endif

#ifndef YORDLE_META_DEF_PerkBuff
    struct PerkBuff;
#endif

#ifndef YORDLE_META_DEF_DefaultSplashedPerkStyle
    struct DefaultSplashedPerkStyle;
#endif

#ifndef YORDLE_META_DEF_Perk
    struct Perk;
#endif

#ifndef YORDLE_META_DEF_DefaultStatModPerkSet
    struct DefaultStatModPerkSet;
#endif

#ifndef YORDLE_META_DEF_ResourceResolver
    struct ResourceResolver;
#endif
    struct YORDLE_EXPORT PerkStyle : public bin_class {
        explicit PerkStyle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 240569694u;
        }

        uint32_t mPerkStyleId = 0u;
        std::string mPerkStyleName {};
        std::string mDisplayNameLocalizationKey {};
        std::string mTooltipNameLocalizationKey {};
        std::string mIconTextureName {};
        std::string mDefaultPageLocalizationKey {};
        std::string mPingTextLocalizationKey {};
        bool mEnabled = true;
        bool mIsAdvancedStyle = false;
        std::vector<uint32_t> mAllowedSubStyles {};
        std::vector<std::shared_ptr<yordle::data::meta::PerkSubStyleBonus>> mSubStyleBonus {};
        std::vector<std::shared_ptr<yordle::data::meta::PerkSlot>> mSlots {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::PerkSlot>> mSlotlinks {};
        std::shared_ptr<yordle::data::meta::PerkScript> mScript {};
        std::shared_ptr<yordle::data::meta::PerkScript> mScriptAsSubStyle {};
        std::vector<std::shared_ptr<yordle::data::meta::PerkBuff>> mBuffs {};
        std::shared_ptr<yordle::data::meta::DefaultSplashedPerkStyle> mDefaultSplash {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::Perk>> mDefaultPerksWhenSplashed {};
        std::vector<std::shared_ptr<yordle::data::meta::DefaultStatModPerkSet>> xfa4e9a2 {};
        std::shared_ptr<yordle::data::meta::ResourceResolver> mStyleVFXResourceResolver {};
        std::map<std::string, std::string> mLCUAssetFileMap {};
    };
}
#define YORDLE_META_DEF_PerkStyle
#endif
