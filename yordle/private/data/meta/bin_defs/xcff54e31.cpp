/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xcff54e31.hpp>

#include <yordle/data/meta/bin_defs/MapPlaceable.hpp>
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

yordle::data::meta::xcff54e31::xcff54e31(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapPlaceable(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x54f3570f = prop->cast_prop<yordle::data::prop::float32_prop>(1425233679u);
    if(ptr_x54f3570f != nullptr) {
        x54f3570f = ptr_x54f3570f->value;
    }

    auto ptr_xbcf819ee = prop->cast_prop<yordle::data::prop::float32_prop>(3170376174u);
    if(ptr_xbcf819ee != nullptr) {
        xbcf819ee = ptr_xbcf819ee->value;
    }

    auto ptr_xaea44051 = prop->cast_prop<yordle::data::prop::float32_prop>(2929999953u);
    if(ptr_xaea44051 != nullptr) {
        xaea44051 = ptr_xaea44051->value;
    }

    auto ptr_fov = prop->cast_prop<yordle::data::prop::float32_prop>(2968750556u);
    if(ptr_fov != nullptr) {
        fov = ptr_fov->value;
    }

    auto ptr_xe3f05fab = prop->cast_prop<yordle::data::prop::bool_prop>(3824181163u);
    if(ptr_xe3f05fab != nullptr) {
        xe3f05fab = ptr_xe3f05fab->value;
    }

    auto ptr_x3ef359c2 = prop->cast_prop<yordle::data::prop::float32_prop>(1056135618u);
    if(ptr_x3ef359c2 != nullptr) {
        x3ef359c2 = ptr_x3ef359c2->value;
    }
}
