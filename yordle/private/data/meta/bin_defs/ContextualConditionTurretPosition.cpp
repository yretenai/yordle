/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionTurretPosition.hpp>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
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

yordle::data::meta::ContextualConditionTurretPosition::ContextualConditionTurretPosition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTurretPosition = prop->cast_prop<yordle::data::prop::uint8_prop>(2777666157u);
    if(ptr_mTurretPosition != nullptr) {
        mTurretPosition = ptr_mTurretPosition->value;
    }
}
