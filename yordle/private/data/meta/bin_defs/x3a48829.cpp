/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x3a48829.hpp>

#include <yordle/data/meta/bin_defs/x4a2fe72c.hpp>
#include <yordle/data/meta/bin_defs/xca4c8132.hpp>
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

yordle::data::meta::x3a48829::x3a48829(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ViewController(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_Scene = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(543410963u);
    if(ptr_Scene != nullptr) {
        Scene = ptr_Scene->value;
    }

    auto ptr_xcee60e1c = prop->cast_prop<yordle::data::prop::set_prop>(3471183388u);
    if(ptr_xcee60e1c != nullptr) {
        auto index_xcee60e1c = 0;
        for(const auto &set_xcee60e1c_entry : ptr_xcee60e1c->value) {
            auto ptr_xcee60e1c_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xcee60e1c_entry);
            if(ptr_xcee60e1c_entry != nullptr) {
                xcee60e1c[index_xcee60e1c] = yordle::data::meta::deserialize<yordle::data::meta::x4a2fe72c>(ptr_xcee60e1c_entry, 1244653356u);
            }
            index_xcee60e1c++;
        }
    }

    auto ptr_xad2db494 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2905453716u);
    if(ptr_xad2db494 != nullptr) {
        xad2db494 = ptr_xad2db494->value;
    }

    auto ptr_x5d3fcc3d = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1564462141u);
    if(ptr_x5d3fcc3d != nullptr) {
        x5d3fcc3d = yordle::data::meta::deserialize<yordle::data::meta::xca4c8132>(ptr_x5d3fcc3d, 3394011442u);
    }
}