/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x732daac5.hpp>

#include <yordle/data/meta/bin_defs/xdf899961.hpp>
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

yordle::data::meta::x732daac5::x732daac5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x3fdaf3f3 = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1071313907u);
    if(ptr_x3fdaf3f3 != nullptr) {
        x3fdaf3f3 = yordle::data::meta::deserialize<yordle::data::meta::xdf899961>(ptr_x3fdaf3f3, 3750336865u);
    }

    auto ptr_x3ed2e0c2 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1054007490u);
    if(ptr_x3ed2e0c2 != nullptr) {
        x3ed2e0c2 = ptr_x3ed2e0c2->value;
    }

    auto ptr_x44659c77 = prop->cast_prop<yordle::data::prop::map_prop>(1147509879u);
    if(ptr_x44659c77 != nullptr) {
        for(const auto &set_x44659c77_pair : ptr_x44659c77->value) {
            auto ptr_x44659c77_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x44659c77_pair.first);
            auto ptr_x44659c77_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x44659c77_pair.second);
            if(ptr_x44659c77_key != nullptr && ptr_x44659c77_value != nullptr) {
                x44659c77.emplace(ptr_x44659c77_key->value, ptr_x44659c77_value->value);
            }
        }
    }

    auto ptr_x6e426029 = prop->cast_prop<yordle::data::prop::map_prop>(1849843753u);
    if(ptr_x6e426029 != nullptr) {
        for(const auto &set_x6e426029_pair : ptr_x6e426029->value) {
            auto ptr_x6e426029_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(set_x6e426029_pair.first);
            auto ptr_x6e426029_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_x6e426029_pair.second);
            if(ptr_x6e426029_key != nullptr && ptr_x6e426029_value != nullptr) {
                x6e426029.emplace(ptr_x6e426029_key->value, ptr_x6e426029_value->value);
            }
        }
    }

    auto ptr_x648ae538 = prop->cast_prop<yordle::data::prop::set_prop>(1686824248u);
    if(ptr_x648ae538 != nullptr) {
        for(const auto &set_x648ae538_entry : ptr_x648ae538->value) {
            auto ptr_x648ae538_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x648ae538_entry);
            if(ptr_x648ae538_entry != nullptr) {
                x648ae538.emplace_back(ptr_x648ae538_entry->value);
            }
        }
    }

    auto ptr_xf0ca32fe = prop->cast_prop<yordle::data::prop::set_prop>(4039783166u);
    if(ptr_xf0ca32fe != nullptr) {
        for(const auto &set_xf0ca32fe_entry : ptr_xf0ca32fe->value) {
            auto ptr_xf0ca32fe_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xf0ca32fe_entry);
            if(ptr_xf0ca32fe_entry != nullptr) {
                xf0ca32fe.emplace_back(ptr_xf0ca32fe_entry->value);
            }
        }
    }
}