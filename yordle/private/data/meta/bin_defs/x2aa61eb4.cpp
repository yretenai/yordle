/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2aa61eb4.hpp>

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

yordle::data::meta::x2aa61eb4::x2aa61eb4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_SourceIcon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2120735593u);
    if(ptr_SourceIcon != nullptr) {
        SourceIcon = ptr_SourceIcon->value;
    }

    auto ptr_xf18979da = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4052318682u);
    if(ptr_xf18979da != nullptr) {
        xf18979da = ptr_xf18979da->value;
    }

    auto ptr_xa8a9c03 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(176856067u);
    if(ptr_xa8a9c03 != nullptr) {
        xa8a9c03 = ptr_xa8a9c03->value;
    }
}
