/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TooltipViewController.hpp>

#include <yordle/data/meta/bin_defs/x9e5aed77.hpp>
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

yordle::data::meta::TooltipViewController::TooltipViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_DefaultAdjustments = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1944635290u);
    if(ptr_DefaultAdjustments != nullptr) {
        DefaultAdjustments = yordle::data::meta::deserialize<yordle::data::meta::x9e5aed77>(ptr_DefaultAdjustments, 2656759159u);
    }

    auto ptr_xf5fc1d3a = prop->cast_prop<yordle::data::prop::map_prop>(4126940474u);
    if(ptr_xf5fc1d3a != nullptr) {
        for(const auto &set_xf5fc1d3a_pair : ptr_xf5fc1d3a->value) {
            auto ptr_xf5fc1d3a_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_xf5fc1d3a_pair.first);
            auto ptr_xf5fc1d3a_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xf5fc1d3a_pair.second);
            if(ptr_xf5fc1d3a_key != nullptr && ptr_xf5fc1d3a_value != nullptr) {
                xf5fc1d3a.emplace(ptr_xf5fc1d3a_key->value, yordle::data::meta::deserialize<yordle::data::meta::x9e5aed77>(ptr_xf5fc1d3a_value, 2656759159u));
            }
        }
    }

    auto ptr_x9e2fcad4 = prop->cast_prop<yordle::data::prop::float32_prop>(2653932244u);
    if(ptr_x9e2fcad4 != nullptr) {
        x9e2fcad4 = ptr_x9e2fcad4->value;
    }

    auto ptr_x750ad235 = prop->cast_prop<yordle::data::prop::float32_prop>(1963643445u);
    if(ptr_x750ad235 != nullptr) {
        x750ad235 = ptr_x750ad235->value;
    }
}
