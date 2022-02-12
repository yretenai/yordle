/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/IsAnimationPlayingDynamicMaterialBoolDriver.hpp>

#include <yordle/data/meta/bin_defs/IDynamicMaterialBoolDriver.hpp>
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

yordle::data::meta::IsAnimationPlayingDynamicMaterialBoolDriver::IsAnimationPlayingDynamicMaterialBoolDriver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IDynamicMaterialBoolDriver(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAnimationNames = prop->cast_prop<yordle::data::prop::set_prop>(817034418u);
    if(ptr_mAnimationNames != nullptr) {
        for(const auto &set_mAnimationNames_entry : ptr_mAnimationNames->value) {
            auto ptr_mAnimationNames_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_mAnimationNames_entry);
            if(ptr_mAnimationNames_entry != nullptr) {
                mAnimationNames.emplace_back(ptr_mAnimationNames_entry->value);
            }
        }
    }
}