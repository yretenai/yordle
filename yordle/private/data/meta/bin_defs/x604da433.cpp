/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x604da433.hpp>

#include <yordle/data/meta/bin_defs/xe259ae3e.hpp>
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

yordle::data::meta::x604da433::x604da433(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xd13a63d1 = prop->cast_prop<yordle::data::prop::set_prop>(3510264785u);
    if(ptr_xd13a63d1 != nullptr) {
        for(const auto &set_xd13a63d1_entry : ptr_xd13a63d1->value) {
            auto ptr_xd13a63d1_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xd13a63d1_entry);
            if(ptr_xd13a63d1_entry != nullptr) {
                xd13a63d1.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xe259ae3e>(ptr_xd13a63d1_entry, 3797528126u));
            }
        }
    }

    auto ptr_xbde64e3e = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3185987134u);
    if(ptr_xbde64e3e != nullptr) {
        xbde64e3e = ptr_xbde64e3e->value;
    }
}