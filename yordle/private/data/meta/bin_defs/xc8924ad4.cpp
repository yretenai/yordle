/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xc8924ad4.hpp>

#include <yordle/data/meta/bin_defs/x47c7ce74.hpp>
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

yordle::data::meta::xc8924ad4::xc8924ad4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xf352e4c = prop->cast_prop<yordle::data::prop::map_prop>(255143500u);
    if(ptr_xf352e4c != nullptr) {
        for(const auto &set_xf352e4c_pair : ptr_xf352e4c->value) {
            auto ptr_xf352e4c_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xf352e4c_pair.first);
            auto ptr_xf352e4c_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xf352e4c_pair.second);
            if(ptr_xf352e4c_key != nullptr && ptr_xf352e4c_value != nullptr) {
                xf352e4c.emplace(ptr_xf352e4c_key->value, yordle::data::meta::deserialize<yordle::data::meta::x47c7ce74>(ptr_xf352e4c_value, 1204276852u));
            }
        }
    }
}
