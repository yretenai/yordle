/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe7a8a5a4.hpp>

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

yordle::data::meta::xe7a8a5a4::xe7a8a5a4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x4d302530 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1295000880u);
    if(ptr_x4d302530 != nullptr) {
        x4d302530 = ptr_x4d302530->value;
    }

    auto ptr_x8c3e02a0 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2352874144u);
    if(ptr_x8c3e02a0 != nullptr) {
        x8c3e02a0 = ptr_x8c3e02a0->value;
    }

    auto ptr_x95e98e52 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2515111506u);
    if(ptr_x95e98e52 != nullptr) {
        x95e98e52 = ptr_x95e98e52->value;
    }

    auto ptr_x1c5512ff = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(475337471u);
    if(ptr_x1c5512ff != nullptr) {
        x1c5512ff = ptr_x1c5512ff->value;
    }
}