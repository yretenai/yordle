/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe69440b8.hpp>

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

yordle::data::meta::xe69440b8::xe69440b8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Group = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1605967500u);
    if(ptr_Group != nullptr) {
        Group = ptr_Group->value;
    }

    auto ptr_xda935a85 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3667090053u);
    if(ptr_xda935a85 != nullptr) {
        xda935a85 = ptr_xda935a85->value;
    }

    auto ptr_x1abd58b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(28038539u);
    if(ptr_x1abd58b != nullptr) {
        x1abd58b = ptr_x1abd58b->value;
    }

    auto ptr_xb2b3ef9d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2998136733u);
    if(ptr_xb2b3ef9d != nullptr) {
        xb2b3ef9d = ptr_xb2b3ef9d->value;
    }

    auto ptr_x63e55f38 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1675976504u);
    if(ptr_x63e55f38 != nullptr) {
        x63e55f38 = ptr_x63e55f38->value;
    }
}
