/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DestroyOnMovementComplete.hpp>

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

yordle::data::meta::DestroyOnMovementComplete::DestroyOnMovementComplete(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileBehaviorSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDelay = prop->cast_prop<yordle::data::prop::int32_prop>(904417079u);
    if(ptr_mDelay != nullptr) {
        mDelay = ptr_mDelay->value;
    }
}