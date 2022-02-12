/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xd1951f45.hpp>

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

yordle::data::meta::xd1951f45::xd1951f45(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_transitionTime = prop->cast_prop<yordle::data::prop::float32_prop>(646358147u);
    if(ptr_transitionTime != nullptr) {
        transitionTime = ptr_transitionTime->value;
    }

    auto ptr_startAlpha = prop->cast_prop<yordle::data::prop::uint8_prop>(2095402753u);
    if(ptr_startAlpha != nullptr) {
        startAlpha = ptr_startAlpha->value;
    }

    auto ptr_endAlpha = prop->cast_prop<yordle::data::prop::uint8_prop>(987558866u);
    if(ptr_endAlpha != nullptr) {
        endAlpha = ptr_endAlpha->value;
    }

    auto ptr_EasingType = prop->cast_prop<yordle::data::prop::uint8_prop>(1933980160u);
    if(ptr_EasingType != nullptr) {
        EasingType = ptr_EasingType->value;
    }
}