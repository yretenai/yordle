/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xaf5a8fff.hpp>

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

yordle::data::meta::xaf5a8fff::xaf5a8fff(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x8e5a5fa9 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2388287401u);
    if(ptr_x8e5a5fa9 != nullptr) {
        x8e5a5fa9 = ptr_x8e5a5fa9->value;
    }

    auto ptr_closeButton = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3029377995u);
    if(ptr_closeButton != nullptr) {
        closeButton = ptr_closeButton->value;
    }
}
