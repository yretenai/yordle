/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x8e14e9d9.hpp>

#include <yordle/data/meta/bin_defs/xe04f7948.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
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

yordle::data::meta::x8e14e9d9::x8e14e9d9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ClipBaseData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x8e5e6618 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2388551192u);
    if(ptr_x8e5e6618 != nullptr) {
        x8e5e6618 = ptr_x8e5e6618->value;
    }

    auto ptr_x21328a43 = prop->cast_prop<yordle::data::prop::set_prop>(556960323u);
    if(ptr_x21328a43 != nullptr) {
        for(const auto &set_x21328a43_entry : ptr_x21328a43->value) {
            auto ptr_x21328a43_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x21328a43_entry);
            if(ptr_x21328a43_entry != nullptr) {
                x21328a43.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xe04f7948>(ptr_x21328a43_entry, 3763304776u));
            }
        }
    }
}
