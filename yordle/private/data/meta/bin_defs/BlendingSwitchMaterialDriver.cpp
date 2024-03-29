/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BlendingSwitchMaterialDriver.hpp>

#include <yordle/data/meta/bin_defs/SwitchMaterialDriver.hpp>
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

yordle::data::meta::BlendingSwitchMaterialDriver::BlendingSwitchMaterialDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::SwitchMaterialDriver(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mBlendTime = prop->cast_prop<yordle::data::prop::float32_prop>(970057882u);
    if(ptr_mBlendTime != nullptr) {
        mBlendTime = ptr_mBlendTime->value;
    }

    auto ptr_mOverrideBlendTimes = prop->cast_prop<yordle::data::prop::set_prop>(642664763u);
    if(ptr_mOverrideBlendTimes != nullptr) {
        for(const auto &set_mOverrideBlendTimes_entry : ptr_mOverrideBlendTimes->value) {
            auto ptr_mOverrideBlendTimes_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(set_mOverrideBlendTimes_entry);
            if(ptr_mOverrideBlendTimes_entry != nullptr) {
                mOverrideBlendTimes.emplace_back(ptr_mOverrideBlendTimes_entry->value);
            }
        }
    }
}
