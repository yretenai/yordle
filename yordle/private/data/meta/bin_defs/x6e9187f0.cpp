/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x6e9187f0.hpp>

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

yordle::data::meta::x6e9187f0::x6e9187f0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x7adbaade = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2061216478u);
    if(ptr_x7adbaade != nullptr) {
        x7adbaade = ptr_x7adbaade->value;
    }

    auto ptr_xe8c8e17 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(244092439u);
    if(ptr_xe8c8e17 != nullptr) {
        xe8c8e17 = ptr_xe8c8e17->value;
    }

    auto ptr_x128a2d92 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(311045522u);
    if(ptr_x128a2d92 != nullptr) {
        x128a2d92 = ptr_x128a2d92->value;
    }
}
