/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdf0d389c.hpp>

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

yordle::data::meta::xdf0d389c::xdf0d389c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Backdrop = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2478896375u);
    if(ptr_Backdrop != nullptr) {
        Backdrop = ptr_Backdrop->value;
    }

    auto ptr_xe019096e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3759737198u);
    if(ptr_xe019096e != nullptr) {
        xe019096e = ptr_xe019096e->value;
    }

    auto ptr_x1de29c5f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(501390431u);
    if(ptr_x1de29c5f != nullptr) {
        x1de29c5f = ptr_x1de29c5f->value;
    }
}
