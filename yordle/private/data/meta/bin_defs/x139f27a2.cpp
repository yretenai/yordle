/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x139f27a2.hpp>

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

yordle::data::meta::x139f27a2::x139f27a2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_type = prop->cast_prop<yordle::data::prop::uint32_prop>(1361572173u);
    if(ptr_type != nullptr) {
        type = ptr_type->value;
    }

    auto ptr_Icon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3862959600u);
    if(ptr_Icon != nullptr) {
        Icon = ptr_Icon->value;
    }

    auto ptr_xbde64e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3185987134u);
    if(ptr_xbde64e3e != nullptr) {
        xbde64e3e = ptr_xbde64e3e->value;
    }

    auto ptr_HitRegion = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4092291606u);
    if(ptr_HitRegion != nullptr) {
        HitRegion = ptr_HitRegion->value;
    }
}