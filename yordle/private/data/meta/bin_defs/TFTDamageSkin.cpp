/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTDamageSkin.hpp>

#include <yordle/data/meta/bin_defs/TftDamageSkinDescriptor.hpp>
#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
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

yordle::data::meta::TFTDamageSkin::TFTDamageSkin(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_StandaloneLoadoutsIcon = prop->cast_prop<yordle::data::prop::string_prop>(1125948026u);
    if(ptr_StandaloneLoadoutsIcon != nullptr) {
        StandaloneLoadoutsIcon = ptr_StandaloneLoadoutsIcon->value;
    }

    auto ptr_StandaloneLoadoutsLargeIcon = prop->cast_prop<yordle::data::prop::string_prop>(4185673651u);
    if(ptr_StandaloneLoadoutsLargeIcon != nullptr) {
        StandaloneLoadoutsLargeIcon = ptr_StandaloneLoadoutsLargeIcon->value;
    }

    auto ptr_VfxResourceResolver = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2679170533u);
    if(ptr_VfxResourceResolver != nullptr) {
        VfxResourceResolver = ptr_VfxResourceResolver->value;
    }

    auto ptr_AudioBankPaths = prop->cast_prop<yordle::data::prop::set_prop>(991437061u);
    if(ptr_AudioBankPaths != nullptr) {
        for(const auto &set_AudioBankPaths_entry : ptr_AudioBankPaths->value) {
            auto ptr_AudioBankPaths_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_AudioBankPaths_entry);
            if(ptr_AudioBankPaths_entry != nullptr) {
                AudioBankPaths.emplace_back(ptr_AudioBankPaths_entry->value);
            }
        }
    }

    auto ptr_mName = prop->cast_prop<yordle::data::prop::string_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_rarity = prop->cast_prop<yordle::data::prop::uint32_prop>(1266615690u);
    if(ptr_rarity != nullptr) {
        rarity = ptr_rarity->value;
    }

    auto ptr_DamageBuffName = prop->cast_prop<yordle::data::prop::string_prop>(2698810810u);
    if(ptr_DamageBuffName != nullptr) {
        DamageBuffName = ptr_DamageBuffName->value;
    }

    auto ptr_SkinID = prop->cast_prop<yordle::data::prop::uint32_prop>(2067069477u);
    if(ptr_SkinID != nullptr) {
        SkinID = ptr_SkinID->value;
    }

    auto ptr_Level = prop->cast_prop<yordle::data::prop::uint32_prop>(2610554845u);
    if(ptr_Level != nullptr) {
        Level = ptr_Level->value;
    }

    auto ptr_disabled = prop->cast_prop<yordle::data::prop::bool_prop>(871591685u);
    if(ptr_disabled != nullptr) {
        disabled = ptr_disabled->value;
    }

    auto ptr_x7ed5b4a7 = prop->cast_prop<yordle::data::prop::float32_prop>(2127934631u);
    if(ptr_x7ed5b4a7 != nullptr) {
        x7ed5b4a7 = ptr_x7ed5b4a7->value;
    }

    auto ptr_x31af5dc6 = prop->cast_prop<yordle::data::prop::set_prop>(833576390u);
    if(ptr_x31af5dc6 != nullptr) {
        for(const auto &set_x31af5dc6_entry : ptr_x31af5dc6->value) {
            auto ptr_x31af5dc6_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x31af5dc6_entry);
            if(ptr_x31af5dc6_entry != nullptr) {
                x31af5dc6.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::TftDamageSkinDescriptor>(ptr_x31af5dc6_entry, 3607046696u));
            }
        }
    }
}