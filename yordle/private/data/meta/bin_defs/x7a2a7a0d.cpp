/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x7a2a7a0d.hpp>

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

yordle::data::meta::x7a2a7a0d::x7a2a7a0d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Group = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1605967500u);
    if(ptr_Group != nullptr) {
        Group = ptr_Group->value;
    }

    auto ptr_Icon = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3862959600u);
    if(ptr_Icon != nullptr) {
        Icon = ptr_Icon->value;
    }

    auto ptr_xd8c93d9d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3637067165u);
    if(ptr_xd8c93d9d != nullptr) {
        xd8c93d9d = ptr_xd8c93d9d->value;
    }

    auto ptr_x8384ca73 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2206517875u);
    if(ptr_x8384ca73 != nullptr) {
        x8384ca73 = ptr_x8384ca73->value;
    }

    auto ptr_xb56b83fd = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3043722237u);
    if(ptr_xb56b83fd != nullptr) {
        xb56b83fd = ptr_xb56b83fd->value;
    }

    auto ptr_xc4d542df = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3302310623u);
    if(ptr_xc4d542df != nullptr) {
        xc4d542df = ptr_xc4d542df->value;
    }

    auto ptr_xf1608144 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(4049633604u);
    if(ptr_xf1608144 != nullptr) {
        xf1608144 = ptr_xf1608144->value;
    }

    auto ptr_xdbc0caa0 = prop->cast_prop<yordle::data::prop::set_prop>(3686845088u);
    if(ptr_xdbc0caa0 != nullptr) {
        for(const auto &set_xdbc0caa0_entry : ptr_xdbc0caa0->value) {
            auto ptr_xdbc0caa0_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xdbc0caa0_entry);
            if(ptr_xdbc0caa0_entry != nullptr) {
                xdbc0caa0.emplace_back(ptr_xdbc0caa0_entry->value);
            }
        }
    }
}