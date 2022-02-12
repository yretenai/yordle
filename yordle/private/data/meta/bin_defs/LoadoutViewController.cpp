/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LoadoutViewController.hpp>

#include <yordle/data/meta/bin_defs/LoadoutCompanionInfoPanel.hpp>
#include <yordle/data/meta/bin_defs/LoadoutArenaSkinInfoPanel.hpp>
#include <yordle/data/meta/bin_defs/LoadoutEmoteInfoPanel.hpp>
#include <yordle/data/meta/bin_defs/LoadoutDamageSkinInfoPanel.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::LoadoutViewController::LoadoutViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x78407281 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2017489537u);
    if(ptr_x78407281 != nullptr) {
        x78407281 = ptr_x78407281->value;
    }

    auto ptr_xd1abeb9d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3517705117u);
    if(ptr_xd1abeb9d != nullptr) {
        xd1abeb9d = ptr_xd1abeb9d->value;
    }

    auto ptr_equipButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(967670299u);
    if(ptr_equipButton != nullptr) {
        equipButton = ptr_equipButton->value;
    }

    auto ptr_gridItemButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3349513554u);
    if(ptr_gridItemButton != nullptr) {
        gridItemButton = ptr_gridItemButton->value;
    }

    auto ptr_upgradeButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3577606887u);
    if(ptr_upgradeButton != nullptr) {
        upgradeButton = ptr_upgradeButton->value;
    }

    auto ptr_x91672418 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2439455768u);
    if(ptr_x91672418 != nullptr) {
        x91672418 = ptr_x91672418->value;
    }

    auto ptr_closeButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3029377995u);
    if(ptr_closeButton != nullptr) {
        closeButton = ptr_closeButton->value;
    }

    auto ptr_SoundOnActivate = prop->cast_prop<yordle::data::prop::string_prop>(2690247672u);
    if(ptr_SoundOnActivate != nullptr) {
        SoundOnActivate = ptr_SoundOnActivate->value;
    }

    auto ptr_SoundOnDeActivate = prop->cast_prop<yordle::data::prop::string_prop>(54554555u);
    if(ptr_SoundOnDeActivate != nullptr) {
        SoundOnDeActivate = ptr_SoundOnDeActivate->value;
    }

    auto ptr_CompanionInfoPanel = prop->cast_prop<yordle::data::prop::inline_structure_prop>(222799957u);
    if(ptr_CompanionInfoPanel != nullptr) {
        CompanionInfoPanel = yordle::data::meta::deserialize<yordle::data::meta::LoadoutCompanionInfoPanel>(ptr_CompanionInfoPanel, 172106287u);
    }

    auto ptr_ArenaInfoPanel = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3889368386u);
    if(ptr_ArenaInfoPanel != nullptr) {
        ArenaInfoPanel = yordle::data::meta::deserialize<yordle::data::meta::LoadoutArenaSkinInfoPanel>(ptr_ArenaInfoPanel, 2807723955u);
    }

    auto ptr_EmoteInfoPanel = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1746567471u);
    if(ptr_EmoteInfoPanel != nullptr) {
        EmoteInfoPanel = yordle::data::meta::deserialize<yordle::data::meta::LoadoutEmoteInfoPanel>(ptr_EmoteInfoPanel, 4100634241u);
    }

    auto ptr_DamageSkinInfoPanel = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1713107521u);
    if(ptr_DamageSkinInfoPanel != nullptr) {
        DamageSkinInfoPanel = yordle::data::meta::deserialize<yordle::data::meta::LoadoutDamageSkinInfoPanel>(ptr_DamageSkinInfoPanel, 845574667u);
    }
}