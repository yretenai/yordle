/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa487a000.hpp>

#include <yordle/data/meta/bin_defs/x9a2769a4.hpp>
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

yordle::data::meta::xa487a000::xa487a000(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::x9a2769a4(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_value = prop->cast_prop<yordle::data::prop::bool_prop>(1113510858u);
    if(ptr_value != nullptr) {
        value = ptr_value->value;
    }
}
