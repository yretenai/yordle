/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x798277f.hpp>

#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
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

yordle::data::meta::x798277f::x798277f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileBehaviorSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x5e19cde2 = prop->cast_prop<yordle::data::prop::float32_prop>(1578749410u);
    if(ptr_x5e19cde2 != nullptr) {
        x5e19cde2 = ptr_x5e19cde2->value;
    }

    auto ptr_x6bfae91c = prop->cast_prop<yordle::data::prop::uint32_prop>(1811605788u);
    if(ptr_x6bfae91c != nullptr) {
        x6bfae91c = ptr_x6bfae91c->value;
    }

    auto ptr_x754a85a6 = prop->cast_prop<yordle::data::prop::uint32_prop>(1967818150u);
    if(ptr_x754a85a6 != nullptr) {
        x754a85a6 = ptr_x754a85a6->value;
    }
}
