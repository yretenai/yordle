/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x1d6c21e5.hpp>

#include <yordle/data/meta/bin_defs/x7d3f50ac.hpp>
#include <yordle/data/meta/bin_defs/x42bac271.hpp>
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

yordle::data::meta::x1d6c21e5::x1d6c21e5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x4d302530 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1295000880u);
    if(ptr_x4d302530 != nullptr) {
        x4d302530 = ptr_x4d302530->value;
    }

    auto ptr_xbf427490 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3208803472u);
    if(ptr_xbf427490 != nullptr) {
        xbf427490 = ptr_xbf427490->value;
    }

    auto ptr_xaef7b46b = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2935469163u);
    if(ptr_xaef7b46b != nullptr) {
        xaef7b46b = yordle::data::meta::deserialize<yordle::data::meta::x7d3f50ac>(ptr_xaef7b46b, 2101301420u);
    }

    auto ptr_xfb0bf90e = prop->cast_prop<yordle::data::prop::inline_structure_prop>(4211865870u);
    if(ptr_xfb0bf90e != nullptr) {
        xfb0bf90e = yordle::data::meta::deserialize<yordle::data::meta::x42bac271>(ptr_xfb0bf90e, 1119535729u);
    }

    auto ptr_xe095d841 = prop->cast_prop<yordle::data::prop::string_prop>(3767916609u);
    if(ptr_xe095d841 != nullptr) {
        xe095d841 = ptr_xe095d841->value;
    }
}
