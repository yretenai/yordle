/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionCharacterHasTimeRemainingForAnimation.hpp>

#include <yordle/data/meta/bin_defs/ICharacterSubcondition.hpp>
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

yordle::data::meta::ContextualConditionCharacterHasTimeRemainingForAnimation::ContextualConditionCharacterHasTimeRemainingForAnimation(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICharacterSubcondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAnimationName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4224806837u);
    if(ptr_mAnimationName != nullptr) {
        mAnimationName = ptr_mAnimationName->value;
    }

    auto ptr_mMinRemainingTime = prop->cast_prop<yordle::data::prop::float32_prop>(3792063913u);
    if(ptr_mMinRemainingTime != nullptr) {
        mMinRemainingTime = ptr_mMinRemainingTime->value;
    }
}
