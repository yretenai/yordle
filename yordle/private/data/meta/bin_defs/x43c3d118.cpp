/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x43c3d118.hpp>

#include <yordle/data/meta/bin_defs/xb5e27400.hpp>
#include <yordle/data/meta/bin_defs/x1be092ec.hpp>
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

yordle::data::meta::x43c3d118::x43c3d118(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x38e9f9ec = prop->cast_prop<yordle::data::prop::int32_prop>(954857964u);
    if(ptr_x38e9f9ec != nullptr) {
        x38e9f9ec = ptr_x38e9f9ec->value;
    }

    auto ptr_x39e9fb7f = prop->cast_prop<yordle::data::prop::int32_prop>(971635583u);
    if(ptr_x39e9fb7f != nullptr) {
        x39e9fb7f = ptr_x39e9fb7f->value;
    }

    auto ptr_xa05cacaa = prop->cast_prop<yordle::data::prop::string_prop>(2690428074u);
    if(ptr_xa05cacaa != nullptr) {
        xa05cacaa = ptr_xa05cacaa->value;
    }

    auto ptr_x1257d9a3 = prop->cast_prop<yordle::data::prop::string_prop>(307747235u);
    if(ptr_x1257d9a3 != nullptr) {
        x1257d9a3 = ptr_x1257d9a3->value;
    }

    auto ptr_xaf939497 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2945684631u);
    if(ptr_xaf939497 != nullptr) {
        xaf939497 = ptr_xaf939497->value;
    }

    auto ptr_xe5e1d1d7 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3856781783u);
    if(ptr_xe5e1d1d7 != nullptr) {
        xe5e1d1d7 = ptr_xe5e1d1d7->value;
    }

    auto ptr_xa1a15b6f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2711706479u);
    if(ptr_xa1a15b6f != nullptr) {
        xa1a15b6f = ptr_xa1a15b6f->value;
    }

    auto ptr_x92831268 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2458063464u);
    if(ptr_x92831268 != nullptr) {
        x92831268 = yordle::data::meta::deserialize<yordle::data::meta::xb5e27400>(ptr_x92831268, 3051516928u);
    }

    auto ptr_xaad6573 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(179135859u);
    if(ptr_xaad6573 != nullptr) {
        xaad6573 = yordle::data::meta::deserialize<yordle::data::meta::x1be092ec>(ptr_xaad6573, 467702508u);
    }

    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }
}
