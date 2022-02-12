/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x13a37f3e.hpp>

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

yordle::data::meta::x13a37f3e::x13a37f3e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
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

    auto ptr_xbde64e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3185987134u);
    if(ptr_xbde64e3e != nullptr) {
        xbde64e3e = ptr_xbde64e3e->value;
    }

    auto ptr_x43b27471 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1135768689u);
    if(ptr_x43b27471 != nullptr) {
        x43b27471 = ptr_x43b27471->value;
    }

    auto ptr_x7d3ef18b = prop->cast_prop<yordle::data::prop::set_prop>(2101277067u);
    if(ptr_x7d3ef18b != nullptr) {
        auto index_x7d3ef18b = 0;
        for(const auto &set_x7d3ef18b_entry : ptr_x7d3ef18b->value) {
            auto ptr_x7d3ef18b_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x7d3ef18b_entry);
            if(ptr_x7d3ef18b_entry != nullptr) {
                x7d3ef18b[index_x7d3ef18b] = ptr_x7d3ef18b_entry->value;
            }
            index_x7d3ef18b++;
        }
    }

    auto ptr_x2de82d6a = prop->cast_prop<yordle::data::prop::set_prop>(770190698u);
    if(ptr_x2de82d6a != nullptr) {
        auto index_x2de82d6a = 0;
        for(const auto &set_x2de82d6a_entry : ptr_x2de82d6a->value) {
            auto ptr_x2de82d6a_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x2de82d6a_entry);
            if(ptr_x2de82d6a_entry != nullptr) {
                x2de82d6a[index_x2de82d6a] = ptr_x2de82d6a_entry->value;
            }
            index_x2de82d6a++;
        }
    }

    auto ptr_xcea0af0e = prop->cast_prop<yordle::data::prop::set_prop>(3466637070u);
    if(ptr_xcea0af0e != nullptr) {
        auto index_xcea0af0e = 0;
        for(const auto &set_xcea0af0e_entry : ptr_xcea0af0e->value) {
            auto ptr_xcea0af0e_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xcea0af0e_entry);
            if(ptr_xcea0af0e_entry != nullptr) {
                xcea0af0e[index_xcea0af0e] = ptr_xcea0af0e_entry->value;
            }
            index_xcea0af0e++;
        }
    }
}
