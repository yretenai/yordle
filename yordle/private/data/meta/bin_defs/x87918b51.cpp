/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x87918b51.hpp>

#include <yordle/data/meta/bin_defs/xb3e3401c.hpp>
#include <yordle/data/meta/bin_defs/HudMessageDisplayData.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
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

yordle::data::meta::x87918b51::x87918b51(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf087db8 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(252214712u);
    if(ptr_xf087db8 != nullptr) {
        xf087db8 = ptr_xf087db8->value;
    }

    auto ptr_x38db73ae = prop->cast_prop<yordle::data::prop::inline_structure_prop>(953906094u);
    if(ptr_x38db73ae != nullptr) {
        x38db73ae = yordle::data::meta::deserialize<yordle::data::meta::xb3e3401c>(ptr_x38db73ae, 3018014748u);
    }

    auto ptr_MessageDisplayData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1848909498u);
    if(ptr_MessageDisplayData != nullptr) {
        MessageDisplayData = yordle::data::meta::deserialize<yordle::data::meta::HudMessageDisplayData>(ptr_MessageDisplayData, 1269294773u);
    }

    auto ptr_xe095d841 = prop->cast_prop<yordle::data::prop::string_prop>(3767916609u);
    if(ptr_xe095d841 != nullptr) {
        xe095d841 = ptr_xe095d841->value;
    }

    auto ptr_x6341d93b = prop->cast_prop<yordle::data::prop::bool_prop>(1665259835u);
    if(ptr_x6341d93b != nullptr) {
        x6341d93b = ptr_x6341d93b->value;
    }
}
