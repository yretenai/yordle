/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xcd1215b8.hpp>

#include <yordle/data/meta/bin_defs/x85b9b550.hpp>
#include <yordle/data/meta/bin_defs/x8f04cc91.hpp>
#include <yordle/data/meta/bin_defs/xa4c4c795.hpp>
#include <yordle/data/meta/bin_defs/xb78525db.hpp>
#include <yordle/data/meta/bin_defs/xef0efd87.hpp>
#include <yordle/data/meta/bin_defs/x20d7982e.hpp>
#include <yordle/data/meta/bin_defs/x34270fce.hpp>
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

yordle::data::meta::xcd1215b8::xcd1215b8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_RootScene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2332884115u);
    if(ptr_RootScene != nullptr) {
        RootScene = ptr_RootScene->value;
    }

    auto ptr_x43a6ecf7 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1135013111u);
    if(ptr_x43a6ecf7 != nullptr) {
        x43a6ecf7 = ptr_x43a6ecf7->value;
    }

    auto ptr_x80f7df1d = prop->cast_prop<yordle::data::prop::set_prop>(2163728157u);
    if(ptr_x80f7df1d != nullptr) {
        for(const auto &set_x80f7df1d_entry : ptr_x80f7df1d->value) {
            auto ptr_x80f7df1d_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x80f7df1d_entry);
            if(ptr_x80f7df1d_entry != nullptr) {
                x80f7df1d.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x85b9b550>(ptr_x80f7df1d_entry, 2243540304u));
            }
        }
    }

    auto ptr_x76e1ca64 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1994508900u);
    if(ptr_x76e1ca64 != nullptr) {
        x76e1ca64 = yordle::data::meta::deserialize<yordle::data::meta::x8f04cc91>(ptr_x76e1ca64, 2399456401u);
    }

    auto ptr_x1f4dd8bb = prop->cast_prop<yordle::data::prop::inline_structure_prop>(525195451u);
    if(ptr_x1f4dd8bb != nullptr) {
        x1f4dd8bb = yordle::data::meta::deserialize<yordle::data::meta::xa4c4c795>(ptr_x1f4dd8bb, 2764359573u);
    }

    auto ptr_x2cf093ce = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(753963982u);
    if(ptr_x2cf093ce != nullptr) {
        x2cf093ce = ptr_x2cf093ce->value;
    }

    auto ptr_xf5ef5591 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4126102929u);
    if(ptr_xf5ef5591 != nullptr) {
        xf5ef5591 = ptr_xf5ef5591->value;
    }

    auto ptr_xb78525db = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3078956507u);
    if(ptr_xb78525db != nullptr) {
        xb78525db = yordle::data::meta::deserialize<yordle::data::meta::xb78525db>(ptr_xb78525db, 3078956507u);
    }

    auto ptr_xd2517598 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3528553880u);
    if(ptr_xd2517598 != nullptr) {
        xd2517598 = yordle::data::meta::deserialize<yordle::data::meta::xef0efd87>(ptr_xd2517598, 4010737031u);
    }

    auto ptr_x4807a7a6 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1208461222u);
    if(ptr_x4807a7a6 != nullptr) {
        x4807a7a6 = yordle::data::meta::deserialize<yordle::data::meta::x20d7982e>(ptr_x4807a7a6, 551000110u);
    }

    auto ptr_x38a3cb36 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(950258486u);
    if(ptr_x38a3cb36 != nullptr) {
        x38a3cb36 = ptr_x38a3cb36->value;
    }

    auto ptr_xe0b29ef4 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3769802484u);
    if(ptr_xe0b29ef4 != nullptr) {
        xe0b29ef4 = yordle::data::meta::deserialize<yordle::data::meta::x34270fce>(ptr_xe0b29ef4, 874975182u);
    }

    auto ptr_x4e1babb4 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1310436276u);
    if(ptr_x4e1babb4 != nullptr) {
        x4e1babb4 = yordle::data::meta::deserialize<yordle::data::meta::x34270fce>(ptr_x4e1babb4, 874975182u);
    }

    auto ptr_x46ea8d6b = prop->cast_prop<yordle::data::prop::float32_prop>(1189776747u);
    if(ptr_x46ea8d6b != nullptr) {
        x46ea8d6b = ptr_x46ea8d6b->value;
    }
}
