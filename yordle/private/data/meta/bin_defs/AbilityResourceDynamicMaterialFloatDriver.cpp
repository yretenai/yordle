/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AbilityResourceDynamicMaterialFloatDriver.hpp>

#include <yordle/data/meta/bin_defs/xb33b2406.hpp>
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

yordle::data::meta::AbilityResourceDynamicMaterialFloatDriver::AbilityResourceDynamicMaterialFloatDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::xb33b2406(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_slot = prop->cast_prop<yordle::data::prop::uint8_prop>(1888831345u);
    if(ptr_slot != nullptr) {
        slot = ptr_slot->value;
    }
}
