/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xa1c2c89f.hpp>

#include <yordle/data/meta/bin_defs/x231dd1a2.hpp>
#include <yordle/data/meta/bin_defs/xc7d8a802.hpp>
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

yordle::data::meta::xa1c2c89f::xa1c2c89f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xc7d8a802(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x4255c7d1 = prop->cast_prop<yordle::data::prop::set_prop>(1112917969u);
    if(ptr_x4255c7d1 != nullptr) {
        for(const auto &set_x4255c7d1_entry : ptr_x4255c7d1->value) {
            auto ptr_x4255c7d1_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x4255c7d1_entry);
            if(ptr_x4255c7d1_entry != nullptr) {
                x4255c7d1.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::x231dd1a2>(589156770u, ptr_x4255c7d1_entry->value));
            }
        }
    }

    auto ptr_x82ad3a6e = prop->cast_prop<yordle::data::prop::reference_prop>(2192390766u);
    if(ptr_x82ad3a6e != nullptr) {
        x82ad3a6e = yordle::data::meta::bin_ref<yordle::data::meta::x231dd1a2>(589156770u, ptr_x82ad3a6e->value);
    }
}
