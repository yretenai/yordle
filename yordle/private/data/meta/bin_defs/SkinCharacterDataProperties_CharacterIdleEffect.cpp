/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
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

yordle::data::meta::SkinCharacterDataProperties_CharacterIdleEffect::SkinCharacterDataProperties_CharacterIdleEffect(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_effectKey = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2600665331u);
    if(ptr_effectKey != nullptr) {
        effectKey = ptr_effectKey->value;
    }

    auto ptr_effectName = prop->cast_prop<yordle::data::prop::string_prop>(1209207887u);
    if(ptr_effectName != nullptr) {
        effectName = ptr_effectName->value;
    }

    auto ptr_position = prop->cast_prop<yordle::data::prop::vector_prop>(2471448074u);
    if(ptr_position != nullptr) {
        position = ptr_position->value;
    }

    auto ptr_boneName = prop->cast_prop<yordle::data::prop::string_prop>(516659084u);
    if(ptr_boneName != nullptr) {
        boneName = ptr_boneName->value;
    }

    auto ptr_targetBoneName = prop->cast_prop<yordle::data::prop::string_prop>(3661793589u);
    if(ptr_targetBoneName != nullptr) {
        targetBoneName = ptr_targetBoneName->value;
    }
}