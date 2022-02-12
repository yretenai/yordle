/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xaf23408c.hpp>

#include <yordle/data/meta/bin_defs/MapAction.hpp>
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

yordle::data::meta::xaf23408c::xaf23408c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x5c042946 = prop->cast_prop<yordle::data::prop::set_prop>(1543776582u);
    if(ptr_x5c042946 != nullptr) {
        for(const auto &set_x5c042946_entry : ptr_x5c042946->value) {
            auto ptr_x5c042946_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x5c042946_entry);
            if(ptr_x5c042946_entry != nullptr) {
                x5c042946.emplace_back(ptr_x5c042946_entry->value);
            }
        }
    }

    auto ptr_x15db0d85 = prop->cast_prop<yordle::data::prop::string_prop>(366677381u);
    if(ptr_x15db0d85 != nullptr) {
        x15db0d85 = ptr_x15db0d85->value;
    }

    auto ptr_x29a7efc6 = prop->cast_prop<yordle::data::prop::float32_prop>(698871750u);
    if(ptr_x29a7efc6 != nullptr) {
        x29a7efc6 = ptr_x29a7efc6->value;
    }

    auto ptr_Shuffle = prop->cast_prop<yordle::data::prop::bool_prop>(2030840142u);
    if(ptr_Shuffle != nullptr) {
        Shuffle = ptr_Shuffle->value;
    }
}
