/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x26557b0a.hpp>

#include <yordle/data/meta/bin_defs/xfa29db11.hpp>
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

yordle::data::meta::x26557b0a::x26557b0a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe095d841 = prop->cast_prop<yordle::data::prop::string_prop>(3767916609u);
    if(ptr_xe095d841 != nullptr) {
        xe095d841 = ptr_xe095d841->value;
    }

    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_x72b5176a = prop->cast_prop<yordle::data::prop::set_prop>(1924470634u);
    if(ptr_x72b5176a != nullptr) {
        auto index_x72b5176a = 0;
        for(const auto &set_x72b5176a_entry : ptr_x72b5176a->value) {
            auto ptr_x72b5176a_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_x72b5176a_entry);
            if(ptr_x72b5176a_entry != nullptr) {
                x72b5176a[index_x72b5176a] = yordle::data::meta::deserialize<yordle::data::meta::xfa29db11>(ptr_x72b5176a_entry, 4197047057u);
            }
            index_x72b5176a++;
        }
    }
}