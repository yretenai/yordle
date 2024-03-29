/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualConditionMapRegionName.hpp>

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

yordle::data::meta::ContextualConditionMapRegionName::ContextualConditionMapRegionName(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IContextualCondition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mRegionType = prop->cast_prop<yordle::data::prop::uint8_prop>(86655780u);
    if(ptr_mRegionType != nullptr) {
        mRegionType = ptr_mRegionType->value;
    }

    auto ptr_mRegionName = prop->cast_prop<yordle::data::prop::string_prop>(4145313831u);
    if(ptr_mRegionName != nullptr) {
        mRegionName = ptr_mRegionName->value;
    }
}
