/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa5584548.hpp>

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

yordle::data::meta::xa5584548::xa5584548(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x13859f0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(20470256u);
    if(ptr_x13859f0 != nullptr) {
        x13859f0 = ptr_x13859f0->value;
    }

    auto ptr_xd9b6cda9 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3652636073u);
    if(ptr_xd9b6cda9 != nullptr) {
        xd9b6cda9 = ptr_xd9b6cda9->value;
    }

    auto ptr_x35400ee4 = prop->cast_prop<yordle::data::prop::float32_prop>(893390564u);
    if(ptr_x35400ee4 != nullptr) {
        x35400ee4 = ptr_x35400ee4->value;
    }
}