/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionItemHotkeys.hpp>

#include <yordle/data/meta/bin_defs/IOptionItem.hpp>
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

yordle::data::meta::OptionItemHotkeys::OptionItemHotkeys(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IOptionItem(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x694aaa0b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1766500875u);
    if(ptr_x694aaa0b != nullptr) {
        x694aaa0b = ptr_x694aaa0b->value;
    }
}
