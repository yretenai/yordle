/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DamageUnitCheat.hpp>

#include <yordle/data/meta/bin_defs/Cheat.hpp>
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

yordle::data::meta::DamageUnitCheat::DamageUnitCheat(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::Cheat(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTarget = prop->cast_prop<yordle::data::prop::uint32_prop>(2572657729u);
    if(ptr_mTarget != nullptr) {
        mTarget = ptr_mTarget->value;
    }

    auto ptr_mDamageAmount = prop->cast_prop<yordle::data::prop::uint32_prop>(380880277u);
    if(ptr_mDamageAmount != nullptr) {
        mDamageAmount = ptr_mDamageAmount->value;
    }

    auto ptr_mPercentageOfAttack = prop->cast_prop<yordle::data::prop::float32_prop>(2872806129u);
    if(ptr_mPercentageOfAttack != nullptr) {
        mPercentageOfAttack = ptr_mPercentageOfAttack->value;
    }

    auto ptr_mDamageType = prop->cast_prop<yordle::data::prop::uint32_prop>(3206328209u);
    if(ptr_mDamageType != nullptr) {
        mDamageType = ptr_mDamageType->value;
    }

    auto ptr_mHitResult = prop->cast_prop<yordle::data::prop::uint32_prop>(4001524460u);
    if(ptr_mHitResult != nullptr) {
        mHitResult = ptr_mHitResult->value;
    }
}