/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SwitchMaterialDriverElement.hpp>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
#include <yordle/data/meta/bin_defs/IDynamicMaterialDriver.hpp>
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

yordle::data::meta::SwitchMaterialDriverElement::SwitchMaterialDriverElement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mCondition = prop->cast_prop<yordle::data::prop::structure_prop>(813840573u);
    if(ptr_mCondition != nullptr) {
        mCondition = yordle::data::meta::deserialize<yordle::data::meta::IDynamicMaterialBoolDriver>(ptr_mCondition, 3663840478u);
    }

    auto ptr_mValue = prop->cast_prop<yordle::data::prop::structure_prop>(619900041u);
    if(ptr_mValue != nullptr) {
        mValue = yordle::data::meta::deserialize<yordle::data::meta::IDynamicMaterialDriver>(ptr_mValue, 1009087838u);
    }
}
