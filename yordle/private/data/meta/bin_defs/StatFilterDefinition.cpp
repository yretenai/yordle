/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/StatFilterDefinition.hpp>

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

yordle::data::meta::StatFilterDefinition::StatFilterDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_buttonDefinition = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3751321492u);
    if(ptr_buttonDefinition != nullptr) {
        buttonDefinition = ptr_buttonDefinition->value;
    }

    auto ptr_MatchingCategories = prop->cast_prop<yordle::data::prop::set_prop>(1733100898u);
    if(ptr_MatchingCategories != nullptr) {
        for(const auto &set_MatchingCategories_entry : ptr_MatchingCategories->value) {
            auto ptr_MatchingCategories_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_MatchingCategories_entry);
            if(ptr_MatchingCategories_entry != nullptr) {
                MatchingCategories.emplace_back(ptr_MatchingCategories_entry->value);
            }
        }
    }
}
