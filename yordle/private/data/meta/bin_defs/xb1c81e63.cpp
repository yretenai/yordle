/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb1c81e63.hpp>

#include <yordle/data/meta/bin_defs/xbbac8ee0.hpp>
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

yordle::data::meta::xb1c81e63::xb1c81e63(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x237182f6 = prop->cast_prop<yordle::data::prop::bool_prop>(594641654u);
    if(ptr_x237182f6 != nullptr) {
        x237182f6 = ptr_x237182f6->value;
    }

    auto ptr_xb119d28 = prop->cast_prop<yordle::data::prop::bool_prop>(185703720u);
    if(ptr_xb119d28 != nullptr) {
        xb119d28 = ptr_xb119d28->value;
    }

    auto ptr_x770acb64 = prop->cast_prop<yordle::data::prop::set_prop>(1997196132u);
    if(ptr_x770acb64 != nullptr) {
        for(const auto &set_x770acb64_entry : ptr_x770acb64->value) {
            auto ptr_x770acb64_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int32_prop>(set_x770acb64_entry);
            if(ptr_x770acb64_entry != nullptr) {
                x770acb64.emplace_back(ptr_x770acb64_entry->value);
            }
        }
    }

    auto ptr_xd598ba1 = prop->cast_prop<yordle::data::prop::set_prop>(223972257u);
    if(ptr_xd598ba1 != nullptr) {
        for(const auto &set_xd598ba1_entry : ptr_xd598ba1->value) {
            auto ptr_xd598ba1_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int32_prop>(set_xd598ba1_entry);
            if(ptr_xd598ba1_entry != nullptr) {
                xd598ba1.emplace_back(ptr_xd598ba1_entry->value);
            }
        }
    }

    auto ptr_x6df2c8a2 = prop->cast_prop<yordle::data::prop::int32_prop>(1844627618u);
    if(ptr_x6df2c8a2 != nullptr) {
        x6df2c8a2 = ptr_x6df2c8a2->value;
    }

    auto ptr_path = prop->cast_prop<yordle::data::prop::string_prop>(2223459638u);
    if(ptr_path != nullptr) {
        path = ptr_path->value;
    }

    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_description = prop->cast_prop<yordle::data::prop::string_prop>(879704937u);
    if(ptr_description != nullptr) {
        description = ptr_description->value;
    }

    auto ptr_Actions = prop->cast_prop<yordle::data::prop::set_prop>(3048556132u);
    if(ptr_Actions != nullptr) {
        for(const auto &set_Actions_entry : ptr_Actions->value) {
            auto ptr_Actions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_Actions_entry);
            if(ptr_Actions_entry != nullptr) {
                Actions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xbbac8ee0>(ptr_Actions_entry, 3148648160u));
            }
        }
    }

    auto ptr_xbe87260f = prop->cast_prop<yordle::data::prop::bool_prop>(3196528143u);
    if(ptr_xbe87260f != nullptr) {
        xbe87260f = ptr_xbe87260f->value;
    }

    auto ptr_xb1a84d1c = prop->cast_prop<yordle::data::prop::int32_prop>(2980597020u);
    if(ptr_xb1a84d1c != nullptr) {
        xb1a84d1c = ptr_xb1a84d1c->value;
    }
}
