/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/LoginViewController.hpp>

#include <yordle/data/meta/bin_defs/x2339b9f8.hpp>
#include <yordle/data/meta/bin_defs/xa6e3bf67.hpp>
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

yordle::data::meta::LoginViewController::LoginViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x707586e2 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1886750434u);
    if(ptr_x707586e2 != nullptr) {
        x707586e2 = yordle::data::meta::deserialize<yordle::data::meta::x2339b9f8>(ptr_x707586e2, 590985720u);
    }

    auto ptr_x550d895 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(89184405u);
    if(ptr_x550d895 != nullptr) {
        x550d895 = yordle::data::meta::deserialize<yordle::data::meta::xa6e3bf67>(ptr_x550d895, 2799943527u);
    }

    auto ptr_xb11e62a4 = prop->cast_prop<yordle::data::prop::set_prop>(2971558564u);
    if(ptr_xb11e62a4 != nullptr) {
        auto index_xb11e62a4 = 0;
        for(const auto &set_xb11e62a4_entry : ptr_xb11e62a4->value) {
            auto ptr_xb11e62a4_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xb11e62a4_entry);
            if(ptr_xb11e62a4_entry != nullptr) {
                xb11e62a4[index_xb11e62a4] = ptr_xb11e62a4_entry->value;
            }
            index_xb11e62a4++;
        }
    }
}
