/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x257ce8cb.hpp>

#include <yordle/data/meta/bin_defs/x7a2da7e3.hpp>
#include <yordle/data/meta/bin_defs/xf0f3a045.hpp>
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

yordle::data::meta::x257ce8cb::x257ce8cb(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe7cc2c05 = prop->cast_prop<yordle::data::prop::set_prop>(3888917509u);
    if(ptr_xe7cc2c05 != nullptr) {
        for(const auto &set_xe7cc2c05_entry : ptr_xe7cc2c05->value) {
            auto ptr_xe7cc2c05_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe7cc2c05_entry);
            if(ptr_xe7cc2c05_entry != nullptr) {
                xe7cc2c05.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x7a2da7e3>(ptr_xe7cc2c05_entry, 2049812451u));
            }
        }
    }

    auto ptr_x56a33fe1 = prop->cast_prop<yordle::data::prop::set_prop>(1453539297u);
    if(ptr_x56a33fe1 != nullptr) {
        for(const auto &set_x56a33fe1_entry : ptr_x56a33fe1->value) {
            auto ptr_x56a33fe1_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x56a33fe1_entry);
            if(ptr_x56a33fe1_entry != nullptr) {
                x56a33fe1.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xf0f3a045>(ptr_x56a33fe1_entry, 4042498117u));
            }
        }
    }
}