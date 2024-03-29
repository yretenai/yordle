/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionTemplateSlider.hpp>

#include <yordle/data/meta/bin_defs/IOptionTemplate.hpp>
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

yordle::data::meta::OptionTemplateSlider::OptionTemplateSlider(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IOptionTemplate(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_LabelElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3889856367u);
    if(ptr_LabelElement != nullptr) {
        LabelElement = ptr_LabelElement->value;
    }

    auto ptr_valueElement = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2645057986u);
    if(ptr_valueElement != nullptr) {
        valueElement = ptr_valueElement->value;
    }

    auto ptr_x6a05258c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1778722188u);
    if(ptr_x6a05258c != nullptr) {
        x6a05258c = ptr_x6a05258c->value;
    }
}
