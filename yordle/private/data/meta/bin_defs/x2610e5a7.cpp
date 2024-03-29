/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2610e5a7.hpp>

#include <yordle/data/meta/bin_defs/x88246c04.hpp>
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

yordle::data::meta::x2610e5a7::x2610e5a7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xfa144e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4195634750u);
    if(ptr_xfa144e3e != nullptr) {
        xfa144e3e = ptr_xfa144e3e->value;
    }

    auto ptr_ItemIcon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3708628627u);
    if(ptr_ItemIcon != nullptr) {
        ItemIcon = ptr_ItemIcon->value;
    }

    auto ptr_x33e73b8c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(870792076u);
    if(ptr_x33e73b8c != nullptr) {
        x33e73b8c = ptr_x33e73b8c->value;
    }

    auto ptr_x5cdf1384 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1558123396u);
    if(ptr_x5cdf1384 != nullptr) {
        x5cdf1384 = ptr_x5cdf1384->value;
    }

    auto ptr_x14541cac = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(341056684u);
    if(ptr_x14541cac != nullptr) {
        x14541cac = ptr_x14541cac->value;
    }

    auto ptr_xa768acad = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2808655021u);
    if(ptr_xa768acad != nullptr) {
        xa768acad = ptr_xa768acad->value;
    }

    auto ptr_xb08eaa53 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2962139731u);
    if(ptr_xb08eaa53 != nullptr) {
        xb08eaa53 = yordle::data::meta::deserialize<yordle::data::meta::x88246c04>(ptr_xb08eaa53, 2284088324u);
    }

    auto ptr_x7348db33 = prop->cast_prop<yordle::data::prop::map_prop>(1934154547u);
    if(ptr_x7348db33 != nullptr) {
        for(const auto &set_x7348db33_pair : ptr_x7348db33->value) {
            auto ptr_x7348db33_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x7348db33_pair.first);
            auto ptr_x7348db33_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x7348db33_pair.second);
            if(ptr_x7348db33_key != nullptr && ptr_x7348db33_value != nullptr) {
                x7348db33.emplace(ptr_x7348db33_key->value, yordle::data::meta::deserialize<yordle::data::meta::x88246c04>(ptr_x7348db33_value, 2284088324u));
            }
        }
    }

    auto ptr_x30145a7e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(806640254u);
    if(ptr_x30145a7e != nullptr) {
        x30145a7e = ptr_x30145a7e->value;
    }
}
