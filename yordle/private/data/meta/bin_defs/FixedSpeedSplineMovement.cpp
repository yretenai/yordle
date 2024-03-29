/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FixedSpeedSplineMovement.hpp>

#include <yordle/data/meta/bin_defs/GenericSplineMovementSpec.hpp>
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

yordle::data::meta::FixedSpeedSplineMovement::FixedSpeedSplineMovement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GenericSplineMovementSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(1287742835u);
    if(ptr_mSpeed != nullptr) {
        mSpeed = ptr_mSpeed->value;
    }
}
