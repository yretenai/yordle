/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x1d6f8226.hpp>

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

yordle::data::meta::x1d6f8226::x1d6f8226(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xef2cd5bb = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4012692923u);
    if(ptr_xef2cd5bb != nullptr) {
        xef2cd5bb = ptr_xef2cd5bb->value;
    }

    auto ptr_HoverIcon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3707442792u);
    if(ptr_HoverIcon != nullptr) {
        HoverIcon = ptr_HoverIcon->value;
    }
}
