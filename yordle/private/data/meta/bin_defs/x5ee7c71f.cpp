/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x5ee7c71f.hpp>

#include <yordle/data/meta/bin_defs/xe76e6115.hpp>
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

yordle::data::meta::x5ee7c71f::x5ee7c71f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xe76e6115(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xd95f7caa = prop->cast_prop<yordle::data::prop::bool_prop>(3646913706u);
    if(ptr_xd95f7caa != nullptr) {
        xd95f7caa = ptr_xd95f7caa->value;
    }

    auto ptr_x68aa7f75 = prop->cast_prop<yordle::data::prop::bool_prop>(1756004213u);
    if(ptr_x68aa7f75 != nullptr) {
        x68aa7f75 = ptr_x68aa7f75->value;
    }

    auto ptr_x47c120b7 = prop->cast_prop<yordle::data::prop::set_prop>(1203839159u);
    if(ptr_x47c120b7 != nullptr) {
        for(const auto &set_x47c120b7_entry : ptr_x47c120b7->value) {
            auto ptr_x47c120b7_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_x47c120b7_entry);
            if(ptr_x47c120b7_entry != nullptr) {
                x47c120b7.emplace_back(ptr_x47c120b7_entry->value);
            }
        }
    }
}