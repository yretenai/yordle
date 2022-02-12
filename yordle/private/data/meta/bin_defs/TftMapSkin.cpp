/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TftMapSkin.hpp>

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

yordle::data::meta::TftMapSkin::TftMapSkin(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
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

    auto ptr_GroupLink = prop->cast_prop<yordle::data::prop::string_prop>(4216969820u);
    if(ptr_GroupLink != nullptr) {
        GroupLink = ptr_GroupLink->value;
    }

    auto ptr_rarity = prop->cast_prop<yordle::data::prop::uint32_prop>(1266615690u);
    if(ptr_rarity != nullptr) {
        rarity = ptr_rarity->value;
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

    auto ptr_Characters = prop->cast_prop<yordle::data::prop::unordered_set_prop>(2421522649u);
    if(ptr_Characters != nullptr) {
        for(const auto &set_Characters_entry : ptr_Characters->value) {
            auto ptr_Characters_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_Characters_entry);
            if(ptr_Characters_entry != nullptr) {
                Characters.emplace_back(ptr_Characters_entry->value);
            }
        }
    }

    auto ptr_MapContainer = prop->cast_prop<yordle::data::prop::string_prop>(3723018516u);
    if(ptr_MapContainer != nullptr) {
        MapContainer = ptr_MapContainer->value;
    }

    auto ptr_xafc467eb = prop->cast_prop<yordle::data::prop::uint16_prop>(2948884459u);
    if(ptr_xafc467eb != nullptr) {
        xafc467eb = ptr_xafc467eb->value;
    }

    auto ptr_x6e39b04a = prop->cast_prop<yordle::data::prop::uint16_prop>(1849274442u);
    if(ptr_x6e39b04a != nullptr) {
        x6e39b04a = ptr_x6e39b04a->value;
    }
}