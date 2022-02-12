/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/NamedDataValueCalculationPart.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
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

yordle::data::meta::NamedDataValueCalculationPart::NamedDataValueCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPart(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDataValue = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3011960049u);
    if(ptr_mDataValue != nullptr) {
        mDataValue = ptr_mDataValue->value;
    }
}
