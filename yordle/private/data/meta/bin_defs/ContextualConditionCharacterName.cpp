/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionCharacterName.hpp>

#include <yordle/data/meta/bin_defs/ICharacterSubcondition.hpp>
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

yordle::data::meta::ContextualConditionCharacterName::ContextualConditionCharacterName(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICharacterSubcondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mCharacters = prop->cast_prop<yordle::data::prop::set_prop>(3604631660u);
    if(ptr_mCharacters != nullptr) {
        for(const auto &set_mCharacters_entry : ptr_mCharacters->value) {
            auto ptr_mCharacters_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mCharacters_entry);
            if(ptr_mCharacters_entry != nullptr) {
                mCharacters.emplace_back(ptr_mCharacters_entry->value);
            }
        }
    }
}
