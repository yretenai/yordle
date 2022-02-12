/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AbilityResourceTypeConfig.hpp>

#include <yordle/data/meta/bin_defs/AbilityResourceTypeData.hpp>
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

yordle::data::meta::AbilityResourceTypeConfig::AbilityResourceTypeConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Mana = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3650585354u);
    if(ptr_Mana != nullptr) {
        Mana = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Mana, 3011369577u);
    }

    auto ptr_Energy = prop->cast_prop<yordle::data::prop::inline_structure_prop>(701255829u);
    if(ptr_Energy != nullptr) {
        Energy = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Energy, 3011369577u);
    }

    auto ptr_None = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2913447899u);
    if(ptr_None != nullptr) {
        None = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_None, 3011369577u);
    }

    auto ptr_Shield = prop->cast_prop<yordle::data::prop::inline_structure_prop>(863312304u);
    if(ptr_Shield != nullptr) {
        Shield = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Shield, 3011369577u);
    }

    auto ptr_BattleFury = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1229507531u);
    if(ptr_BattleFury != nullptr) {
        BattleFury = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_BattleFury, 3011369577u);
    }

    auto ptr_DragonFury = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2700506754u);
    if(ptr_DragonFury != nullptr) {
        DragonFury = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_DragonFury, 3011369577u);
    }

    auto ptr_Rage = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2125639436u);
    if(ptr_Rage != nullptr) {
        Rage = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Rage, 3011369577u);
    }

    auto ptr_Heat = prop->cast_prop<yordle::data::prop::inline_structure_prop>(577319571u);
    if(ptr_Heat != nullptr) {
        Heat = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Heat, 3011369577u);
    }

    auto ptr_PrimalFury = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2843185348u);
    if(ptr_PrimalFury != nullptr) {
        PrimalFury = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_PrimalFury, 3011369577u);
    }

    auto ptr_Ferocity = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2532758328u);
    if(ptr_Ferocity != nullptr) {
        Ferocity = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Ferocity, 3011369577u);
    }

    auto ptr_Bloodwell = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3379016527u);
    if(ptr_Bloodwell != nullptr) {
        Bloodwell = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Bloodwell, 3011369577u);
    }

    auto ptr_Wind = prop->cast_prop<yordle::data::prop::inline_structure_prop>(336916743u);
    if(ptr_Wind != nullptr) {
        Wind = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Wind, 3011369577u);
    }

    auto ptr_Ammo = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1536888239u);
    if(ptr_Ammo != nullptr) {
        Ammo = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Ammo, 3011369577u);
    }

    auto ptr_Moonlight = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3337955220u);
    if(ptr_Moonlight != nullptr) {
        Moonlight = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Moonlight, 3011369577u);
    }

    auto ptr_Other = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3363671541u);
    if(ptr_Other != nullptr) {
        Other = yordle::data::meta::deserialize<yordle::data::meta::AbilityResourceTypeData>(ptr_Other, 3011369577u);
    }
}