/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xdfa1764c.hpp>

#include <yordle/data/meta/bin_defs/x8164bac7.hpp>
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

yordle::data::meta::xdfa1764c::xdfa1764c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xdd3dd146 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3711816006u);
    if(ptr_xdd3dd146 != nullptr) {
        xdd3dd146 = yordle::data::meta::deserialize<yordle::data::meta::x8164bac7>(ptr_xdd3dd146, 2170862279u);
    }

    auto ptr_x4feffe3e = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1341128254u);
    if(ptr_x4feffe3e != nullptr) {
        x4feffe3e = yordle::data::meta::deserialize<yordle::data::meta::x8164bac7>(ptr_x4feffe3e, 2170862279u);
    }
}