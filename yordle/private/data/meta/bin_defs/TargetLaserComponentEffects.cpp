/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TargetLaserComponentEffects.hpp>

#include <yordle/data/meta/bin_defs/SkinCharacterDataProperties_CharacterIdleEffect.hpp>
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

yordle::data::meta::TargetLaserComponentEffects::TargetLaserComponentEffects(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_beamEffectDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1820024538u);
    if(ptr_beamEffectDefinition != nullptr) {
        beamEffectDefinition = yordle::data::meta::deserialize<yordle::data::meta::SkinCharacterDataProperties_CharacterIdleEffect>(ptr_beamEffectDefinition, 856064357u);
    }

    auto ptr_towerTargetingEffectDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1373168301u);
    if(ptr_towerTargetingEffectDefinition != nullptr) {
        towerTargetingEffectDefinition = yordle::data::meta::deserialize<yordle::data::meta::SkinCharacterDataProperties_CharacterIdleEffect>(ptr_towerTargetingEffectDefinition, 856064357u);
    }

    auto ptr_champTargetingEffectDefinition = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2223923715u);
    if(ptr_champTargetingEffectDefinition != nullptr) {
        champTargetingEffectDefinition = yordle::data::meta::deserialize<yordle::data::meta::SkinCharacterDataProperties_CharacterIdleEffect>(ptr_champTargetingEffectDefinition, 856064357u);
    }
}