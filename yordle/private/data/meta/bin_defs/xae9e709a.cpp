/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xae9e709a.hpp>

#include <yordle/data/meta/bin_class.hpp>
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

yordle::data::meta::xae9e709a::xae9e709a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xde9f26d4 = prop->cast_prop<yordle::data::prop::string_prop>(3734972116u);
    if(ptr_xde9f26d4 != nullptr) {
        xde9f26d4 = ptr_xde9f26d4->value;
    }

    auto ptr_Active = prop->cast_prop<yordle::data::prop::bool_prop>(3648362799u);
    if(ptr_Active != nullptr) {
        Active = ptr_Active->value;
    }
}
