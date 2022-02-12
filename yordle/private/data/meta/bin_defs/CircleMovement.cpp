/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/CircleMovement.hpp>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
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

yordle::data::meta::CircleMovement::CircleMovement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileMovementSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mRadialVelocity = prop->cast_prop<yordle::data::prop::float32_prop>(2374803676u);
    if(ptr_mRadialVelocity != nullptr) {
        mRadialVelocity = ptr_mRadialVelocity->value;
    }

    auto ptr_mAngularVelocity = prop->cast_prop<yordle::data::prop::float32_prop>(984266661u);
    if(ptr_mAngularVelocity != nullptr) {
        mAngularVelocity = ptr_mAngularVelocity->value;
    }

    auto ptr_mLinearVelocity = prop->cast_prop<yordle::data::prop::float32_prop>(2151814918u);
    if(ptr_mLinearVelocity != nullptr) {
        mLinearVelocity = ptr_mLinearVelocity->value;
    }

    auto ptr_mLifetime = prop->cast_prop<yordle::data::prop::float32_prop>(3878970827u);
    if(ptr_mLifetime != nullptr) {
        mLifetime = ptr_mLifetime->value;
    }
}
