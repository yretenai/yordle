/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x6dd26f3a.hpp>

#include <yordle/data/meta/bin_defs/xcff54e31.hpp>
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

yordle::data::meta::x6dd26f3a::x6dd26f3a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xcff54e31(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x99e6dbfe = prop->cast_prop<yordle::data::prop::string_prop>(2582043646u);
    if(ptr_x99e6dbfe != nullptr) {
        x99e6dbfe = ptr_x99e6dbfe->value;
    }

    auto ptr_falloffTexture = prop->cast_prop<yordle::data::prop::string_prop>(2780351988u);
    if(ptr_falloffTexture != nullptr) {
        falloffTexture = ptr_falloffTexture->value;
    }
}
