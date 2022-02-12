/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ReturnToCasterOnMovementComplete.hpp>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
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

yordle::data::meta::ReturnToCasterOnMovementComplete::ReturnToCasterOnMovementComplete(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileBehaviorSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mPreserveSpeed = prop->cast_prop<yordle::data::prop::bool_prop>(2162022683u);
    if(ptr_mPreserveSpeed != nullptr) {
        mPreserveSpeed = ptr_mPreserveSpeed->value;
    }

    auto ptr_mOverrideSpec = prop->cast_prop<yordle::data::prop::structure_prop>(231640515u);
    if(ptr_mOverrideSpec != nullptr) {
        mOverrideSpec = yordle::data::meta::deserialize<yordle::data::meta::MissileMovementSpec>(ptr_mOverrideSpec, 1798110077u);
    }
}
