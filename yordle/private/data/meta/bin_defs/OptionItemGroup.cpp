/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OptionItemGroup.hpp>

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

yordle::data::meta::OptionItemGroup::OptionItemGroup(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IOptionItem(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x694aaa0b = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1766500875u);
    if(ptr_x694aaa0b != nullptr) {
        x694aaa0b = ptr_x694aaa0b->value;
    }

    auto ptr_LabelTraKey = prop->cast_prop<yordle::data::prop::string_prop>(3389946293u);
    if(ptr_LabelTraKey != nullptr) {
        LabelTraKey = ptr_LabelTraKey->value;
    }

    auto ptr_ExpandedByDefault = prop->cast_prop<yordle::data::prop::bool_prop>(3831960366u);
    if(ptr_ExpandedByDefault != nullptr) {
        ExpandedByDefault = ptr_ExpandedByDefault->value;
    }

    auto ptr_items = prop->cast_prop<yordle::data::prop::set_prop>(981021583u);
    if(ptr_items != nullptr) {
        for(const auto &set_items_entry : ptr_items->value) {
            auto ptr_items_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_items_entry);
            if(ptr_items_entry != nullptr) {
                items.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IOptionItem>(ptr_items_entry, 2037513198u));
            }
        }
    }
}
