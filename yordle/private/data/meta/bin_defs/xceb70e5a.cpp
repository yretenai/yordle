/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xceb70e5a.hpp>

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

yordle::data::meta::xceb70e5a::xceb70e5a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_backgroundElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1272541071u);
    if(ptr_backgroundElement != nullptr) {
        backgroundElement = ptr_backgroundElement->value;
    }

    auto ptr_TextElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4005730134u);
    if(ptr_TextElement != nullptr) {
        TextElement = ptr_TextElement->value;
    }
}
