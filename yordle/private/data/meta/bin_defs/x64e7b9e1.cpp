/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x64e7b9e1.hpp>

#include <yordle/data/meta/bin_defs/xa24429bf.hpp>
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

yordle::data::meta::x64e7b9e1::x64e7b9e1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xa24429bf(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe145ee5d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3779456605u);
    if(ptr_xe145ee5d != nullptr) {
        xe145ee5d = ptr_xe145ee5d->value;
    }
}
