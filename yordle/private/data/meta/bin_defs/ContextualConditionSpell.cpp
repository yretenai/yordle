/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionSpell.hpp>

#include <yordle/data/meta/bin_defs/IContextualConditionSpell.hpp>
#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
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

yordle::data::meta::ContextualConditionSpell::ContextualConditionSpell(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mSpellSlot = prop->cast_prop<yordle::data::prop::uint32_prop>(72877302u);
    if(ptr_mSpellSlot != nullptr) {
        mSpellSlot = ptr_mSpellSlot->value;
    }

    auto ptr_mChildConditions = prop->cast_prop<yordle::data::prop::set_prop>(4061901048u);
    if(ptr_mChildConditions != nullptr) {
        for(const auto &set_mChildConditions_entry : ptr_mChildConditions->value) {
            auto ptr_mChildConditions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mChildConditions_entry);
            if(ptr_mChildConditions_entry != nullptr) {
                mChildConditions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IContextualConditionSpell>(ptr_mChildConditions_entry, 576452982u));
            }
        }
    }
}
