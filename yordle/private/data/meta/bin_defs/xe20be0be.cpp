/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xe20be0be.hpp>

#include <yordle/data/meta/bin_defs/xf5822b4e.hpp>
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

yordle::data::meta::xe20be0be::xe20be0be(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x4d302530 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1295000880u);
    if(ptr_x4d302530 != nullptr) {
        x4d302530 = ptr_x4d302530->value;
    }

    auto ptr_x4babd89d = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1269553309u);
    if(ptr_x4babd89d != nullptr) {
        x4babd89d = yordle::data::meta::deserialize<yordle::data::meta::xf5822b4e>(ptr_x4babd89d, 4118948686u);
    }
}
