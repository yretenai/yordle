/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x2558886d.hpp>

#include <yordle/data/meta/bin_defs/x6526fc8.hpp>
#include <yordle/data/meta/bin_defs/x736a7c64.hpp>
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

yordle::data::meta::x2558886d::x2558886d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xeac10e8a = prop->cast_prop<yordle::data::prop::string_prop>(3938520714u);
    if(ptr_xeac10e8a != nullptr) {
        xeac10e8a = ptr_xeac10e8a->value;
    }

    auto ptr_x8b76c33f = prop->cast_prop<yordle::data::prop::string_prop>(2339816255u);
    if(ptr_x8b76c33f != nullptr) {
        x8b76c33f = ptr_x8b76c33f->value;
    }

    auto ptr_xac751fe = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(180834814u);
    if(ptr_xac751fe != nullptr) {
        xac751fe = ptr_xac751fe->value;
    }

    auto ptr_x9b68d1be = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2607337918u);
    if(ptr_x9b68d1be != nullptr) {
        x9b68d1be = ptr_x9b68d1be->value;
    }

    auto ptr_xab91ba1f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2878454303u);
    if(ptr_xab91ba1f != nullptr) {
        xab91ba1f = ptr_xab91ba1f->value;
    }

    auto ptr_x7b65b457 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2070262871u);
    if(ptr_x7b65b457 != nullptr) {
        x7b65b457 = ptr_x7b65b457->value;
    }

    auto ptr_xc190adfd = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3247484413u);
    if(ptr_xc190adfd != nullptr) {
        xc190adfd = ptr_xc190adfd->value;
    }

    auto ptr_x6dc4396c = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1841576300u);
    if(ptr_x6dc4396c != nullptr) {
        x6dc4396c = ptr_x6dc4396c->value;
    }

    auto ptr_xa2718963 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2725349731u);
    if(ptr_xa2718963 != nullptr) {
        xa2718963 = ptr_xa2718963->value;
    }

    auto ptr_x8e3c4be4 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2386316260u);
    if(ptr_x8e3c4be4 != nullptr) {
        x8e3c4be4 = yordle::data::meta::deserialize<yordle::data::meta::x6526fc8>(ptr_x8e3c4be4, 106065864u);
    }

    auto ptr_x4762c958 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1197656408u);
    if(ptr_x4762c958 != nullptr) {
        x4762c958 = yordle::data::meta::deserialize<yordle::data::meta::x736a7c64>(ptr_x4762c958, 1936358500u);
    }
}
