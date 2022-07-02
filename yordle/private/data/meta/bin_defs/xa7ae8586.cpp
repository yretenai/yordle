/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa7ae8586.hpp>

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

yordle::data::meta::xa7ae8586::xa7ae8586(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xbde64e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3185987134u);
    if(ptr_xbde64e3e != nullptr) {
        xbde64e3e = ptr_xbde64e3e->value;
    }

    auto ptr_xa1499fc0 = prop->cast_prop<yordle::data::prop::set_prop>(2705956800u);
    if(ptr_xa1499fc0 != nullptr) {
        auto index_xa1499fc0 = 0;
        for(const auto &set_xa1499fc0_entry : ptr_xa1499fc0->value) {
            auto ptr_xa1499fc0_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xa1499fc0_entry);
            if(ptr_xa1499fc0_entry != nullptr) {
                xa1499fc0[index_xa1499fc0] = ptr_xa1499fc0_entry->value;
            }
            index_xa1499fc0++;
        }
    }

    auto ptr_x4babd89d = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1269553309u);
    if(ptr_x4babd89d != nullptr) {
        x4babd89d = ptr_x4babd89d->value;
    }
}
