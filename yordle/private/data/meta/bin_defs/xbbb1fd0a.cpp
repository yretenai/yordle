/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xbbb1fd0a.hpp>

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

yordle::data::meta::xbbb1fd0a::xbbb1fd0a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x52a7b84e = prop->cast_prop<yordle::data::prop::float32_prop>(1386723406u);
    if(ptr_x52a7b84e != nullptr) {
        x52a7b84e = ptr_x52a7b84e->value;
    }

    auto ptr_x9e4677fa = prop->cast_prop<yordle::data::prop::float32_prop>(2655418362u);
    if(ptr_x9e4677fa != nullptr) {
        x9e4677fa = ptr_x9e4677fa->value;
    }

    auto ptr_x77414c = prop->cast_prop<yordle::data::prop::uint8_prop>(7815500u);
    if(ptr_x77414c != nullptr) {
        x77414c = ptr_x77414c->value;
    }
}
