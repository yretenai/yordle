/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xee4d1304.hpp>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
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

yordle::data::meta::xee4d1304::xee4d1304(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IOptionItemFilter(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Mutator = prop->cast_prop<yordle::data::prop::string_prop>(3473488713u);
    if(ptr_Mutator != nullptr) {
        Mutator = ptr_Mutator->value;
    }
}