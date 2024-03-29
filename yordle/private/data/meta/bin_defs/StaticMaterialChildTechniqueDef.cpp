/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/StaticMaterialChildTechniqueDef.hpp>

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

yordle::data::meta::StaticMaterialChildTechniqueDef::StaticMaterialChildTechniqueDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_parentName = prop->cast_prop<yordle::data::prop::string_prop>(3063326206u);
    if(ptr_parentName != nullptr) {
        parentName = ptr_parentName->value;
    }

    auto ptr_shaderMacros = prop->cast_prop<yordle::data::prop::map_prop>(3872816621u);
    if(ptr_shaderMacros != nullptr) {
        for(const auto &set_shaderMacros_pair : ptr_shaderMacros->value) {
            auto ptr_shaderMacros_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_shaderMacros_pair.first);
            auto ptr_shaderMacros_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_shaderMacros_pair.second);
            if(ptr_shaderMacros_key != nullptr && ptr_shaderMacros_value != nullptr) {
                shaderMacros.emplace(ptr_shaderMacros_key->value, ptr_shaderMacros_value->value);
            }
        }
    }
}
