/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x946612f1.hpp>

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

yordle::data::meta::x946612f1::x946612f1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x67f25899 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1743935641u);
    if(ptr_x67f25899 != nullptr) {
        x67f25899 = ptr_x67f25899->value;
    }

    auto ptr_xa03379b8 = prop->cast_prop<yordle::data::prop::set_prop>(2687728056u);
    if(ptr_xa03379b8 != nullptr) {
        auto index_xa03379b8 = 0;
        for(const auto &set_xa03379b8_entry : ptr_xa03379b8->value) {
            auto ptr_xa03379b8_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xa03379b8_entry);
            if(ptr_xa03379b8_entry != nullptr) {
                xa03379b8[index_xa03379b8] = ptr_xa03379b8_entry->value;
            }
            index_xa03379b8++;
        }
    }

    auto ptr_xdf5ee202 = prop->cast_prop<yordle::data::prop::set_prop>(3747537410u);
    if(ptr_xdf5ee202 != nullptr) {
        auto index_xdf5ee202 = 0;
        for(const auto &set_xdf5ee202_entry : ptr_xdf5ee202->value) {
            auto ptr_xdf5ee202_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xdf5ee202_entry);
            if(ptr_xdf5ee202_entry != nullptr) {
                xdf5ee202[index_xdf5ee202] = ptr_xdf5ee202_entry->value;
            }
            index_xdf5ee202++;
        }
    }
}