/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x3604b3e3.hpp>

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

yordle::data::meta::x3604b3e3::x3604b3e3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x79dafa57 = prop->cast_prop<yordle::data::prop::uint32_prop>(2044394071u);
    if(ptr_x79dafa57 != nullptr) {
        x79dafa57 = ptr_x79dafa57->value;
    }

    auto ptr_xae9687e = prop->cast_prop<yordle::data::prop::float32_prop>(183068798u);
    if(ptr_xae9687e != nullptr) {
        xae9687e = ptr_xae9687e->value;
    }
}