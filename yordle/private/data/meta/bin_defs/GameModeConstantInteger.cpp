/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GameModeConstantInteger.hpp>

#include <yordle/data/meta/bin_defs/GameModeConstant.hpp>
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

yordle::data::meta::GameModeConstantInteger::GameModeConstantInteger(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::GameModeConstant(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mValue = prop->cast_prop<yordle::data::prop::int32_prop>(619900041u);
    if(ptr_mValue != nullptr) {
        mValue = ptr_mValue->value;
    }
}