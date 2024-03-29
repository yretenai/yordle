/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionCharacterHasCAC.hpp>

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

yordle::data::meta::ContextualConditionCharacterHasCAC::ContextualConditionCharacterHasCAC(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICharacterSubcondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mCacs = prop->cast_prop<yordle::data::prop::set_prop>(201153598u);
    if(ptr_mCacs != nullptr) {
        for(const auto &set_mCacs_entry : ptr_mCacs->value) {
            auto ptr_mCacs_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mCacs_entry);
            if(ptr_mCacs_entry != nullptr) {
                mCacs.emplace_back(ptr_mCacs_entry->value);
            }
        }
    }
}
