/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x15f28ac8.hpp>

#include <yordle/data/meta/bin_defs/x868f2575.hpp>
#include <yordle/data/meta/bin_defs/xb0d49a20.hpp>
#include <yordle/data/meta/bin_defs/xe8062aeb.hpp>
#include <yordle/data/meta/bin_defs/x3c8d0b5d.hpp>
#include <yordle/data/meta/bin_defs/x69af20f0.hpp>
#include <yordle/data/meta/bin_defs/x7e08466d.hpp>
#include <yordle/data/meta/bin_defs/x732daac5.hpp>
#include <yordle/data/meta/bin_defs/x6d6cc142.hpp>
#include <yordle/data/meta/bin_defs/xa5dec77a.hpp>
#include <yordle/data/meta/bin_defs/xcbdadf65.hpp>
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

yordle::data::meta::x15f28ac8::x15f28ac8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xcbdadf65(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_xe501995f = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3842087263u);
    if(ptr_xe501995f != nullptr) {
        xe501995f = ptr_xe501995f->value;
    }

    auto ptr_x4b686f21 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1265135393u);
    if(ptr_x4b686f21 != nullptr) {
        x4b686f21 = yordle::data::meta::deserialize<yordle::data::meta::x868f2575>(ptr_x4b686f21, 2257528181u);
    }

    auto ptr_x3ab433f2 = prop->cast_prop<yordle::data::prop::set_prop>(984888306u);
    if(ptr_x3ab433f2 != nullptr) {
        for(const auto &set_x3ab433f2_entry : ptr_x3ab433f2->value) {
            auto ptr_x3ab433f2_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x3ab433f2_entry);
            if(ptr_x3ab433f2_entry != nullptr) {
                x3ab433f2.emplace_back(ptr_x3ab433f2_entry->value);
            }
        }
    }

    auto ptr_xe6e3afce = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3873681358u);
    if(ptr_xe6e3afce != nullptr) {
        xe6e3afce = yordle::data::meta::deserialize<yordle::data::meta::xb0d49a20>(ptr_xe6e3afce, 2966723104u);
    }

    auto ptr_x7f279fa1 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(2133303201u);
    if(ptr_x7f279fa1 != nullptr) {
        x7f279fa1 = yordle::data::meta::deserialize<yordle::data::meta::xe8062aeb>(ptr_x7f279fa1, 3892718315u);
    }

    auto ptr_x10892008 = prop->cast_prop<yordle::data::prop::set_prop>(277422088u);
    if(ptr_x10892008 != nullptr) {
        for(const auto &set_x10892008_entry : ptr_x10892008->value) {
            auto ptr_x10892008_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x10892008_entry);
            if(ptr_x10892008_entry != nullptr) {
                x10892008.emplace_back(ptr_x10892008_entry->value);
            }
        }
    }

    auto ptr_x2c79840f = prop->cast_prop<yordle::data::prop::inline_structure_prop>(746161167u);
    if(ptr_x2c79840f != nullptr) {
        x2c79840f = yordle::data::meta::deserialize<yordle::data::meta::x3c8d0b5d>(ptr_x2c79840f, 1015876445u);
    }

    auto ptr_x4e9df72e = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1318975278u);
    if(ptr_x4e9df72e != nullptr) {
        x4e9df72e = yordle::data::meta::deserialize<yordle::data::meta::x69af20f0>(ptr_x4e9df72e, 1773084912u);
    }

    auto ptr_x2724217e = prop->cast_prop<yordle::data::prop::inline_structure_prop>(656679294u);
    if(ptr_x2724217e != nullptr) {
        x2724217e = yordle::data::meta::deserialize<yordle::data::meta::x7e08466d>(ptr_x2724217e, 2114471533u);
    }

    auto ptr_xb9882937 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3112708407u);
    if(ptr_xb9882937 != nullptr) {
        xb9882937 = yordle::data::meta::deserialize<yordle::data::meta::x732daac5>(ptr_xb9882937, 1932372677u);
    }

    auto ptr_x89aa9aac = prop->cast_prop<yordle::data::prop::reference_prop>(2309659308u);
    if(ptr_x89aa9aac != nullptr) {
        x89aa9aac = yordle::data::meta::bin_ref<yordle::data::meta::x6d6cc142>(1835843906u, ptr_x89aa9aac->value);
    }

    auto ptr_xe8dcc7f6 = prop->cast_prop<yordle::data::prop::set_prop>(3906783222u);
    if(ptr_xe8dcc7f6 != nullptr) {
        auto index_xe8dcc7f6 = 0;
        for(const auto &set_xe8dcc7f6_entry : ptr_xe8dcc7f6->value) {
            auto ptr_xe8dcc7f6_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe8dcc7f6_entry);
            if(ptr_xe8dcc7f6_entry != nullptr) {
                xe8dcc7f6[index_xe8dcc7f6] = yordle::data::meta::deserialize<yordle::data::meta::xa5dec77a>(ptr_xe8dcc7f6_entry, 2782840698u);
            }
            index_xe8dcc7f6++;
        }
    }

    auto ptr_xaa2f85ea = prop->cast_prop<yordle::data::prop::set_prop>(2855241194u);
    if(ptr_xaa2f85ea != nullptr) {
        auto index_xaa2f85ea = 0;
        for(const auto &set_xaa2f85ea_entry : ptr_xaa2f85ea->value) {
            auto ptr_xaa2f85ea_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xaa2f85ea_entry);
            if(ptr_xaa2f85ea_entry != nullptr) {
                xaa2f85ea[index_xaa2f85ea] = yordle::data::meta::deserialize<yordle::data::meta::xa5dec77a>(ptr_xaa2f85ea_entry, 2782840698u);
            }
            index_xaa2f85ea++;
        }
    }
}
