/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionItemVOGroup.hpp>

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

yordle::data::meta::ContextualConditionItemVOGroup::ContextualConditionItemVOGroup(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mItemVOGroupHash = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(207756231u);
    if(ptr_mItemVOGroupHash != nullptr) {
        mItemVOGroupHash = ptr_mItemVOGroupHash->value;
    }
}
