/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x29dfd7ad.hpp>

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

yordle::data::meta::x29dfd7ad::x29dfd7ad(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xaeebcbdd = prop->cast_prop<yordle::data::prop::float32_prop>(2934688733u);
    if(ptr_xaeebcbdd != nullptr) {
        xaeebcbdd = ptr_xaeebcbdd->value;
    }

    auto ptr_xa8a2f6c7 = prop->cast_prop<yordle::data::prop::float32_prop>(2829252295u);
    if(ptr_xa8a2f6c7 != nullptr) {
        xa8a2f6c7 = ptr_xa8a2f6c7->value;
    }

    auto ptr_x64e4f9f9 = prop->cast_prop<yordle::data::prop::float32_prop>(1692727801u);
    if(ptr_x64e4f9f9 != nullptr) {
        x64e4f9f9 = ptr_x64e4f9f9->value;
    }
}