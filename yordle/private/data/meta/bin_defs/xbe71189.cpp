/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xbe71189.hpp>

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

yordle::data::meta::xbe71189::xbe71189(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x7e1ec43 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(132246595u);
    if(ptr_x7e1ec43 != nullptr) {
        x7e1ec43 = ptr_x7e1ec43->value;
    }

    auto ptr_x98f72e4c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2566336076u);
    if(ptr_x98f72e4c != nullptr) {
        x98f72e4c = ptr_x98f72e4c->value;
    }

    auto ptr_xeac10e8a = prop->cast_prop<yordle::data::prop::string_prop>(3938520714u);
    if(ptr_xeac10e8a != nullptr) {
        xeac10e8a = ptr_xeac10e8a->value;
    }

    auto ptr_x8b76c33f = prop->cast_prop<yordle::data::prop::string_prop>(2339816255u);
    if(ptr_x8b76c33f != nullptr) {
        x8b76c33f = ptr_x8b76c33f->value;
    }
}
