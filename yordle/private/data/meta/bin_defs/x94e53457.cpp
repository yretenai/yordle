/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/x94e53457.hpp>

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

yordle::data::meta::x94e53457::x94e53457(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x3cfec826 = prop->cast_prop<yordle::data::prop::set_prop>(1023330342u);
    if(ptr_x3cfec826 != nullptr) {
        for(const auto &set_x3cfec826_entry : ptr_x3cfec826->value) {
            auto ptr_x3cfec826_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x3cfec826_entry);
            if(ptr_x3cfec826_entry != nullptr) {
                x3cfec826.emplace_back(ptr_x3cfec826_entry->value);
            }
        }
    }
}
