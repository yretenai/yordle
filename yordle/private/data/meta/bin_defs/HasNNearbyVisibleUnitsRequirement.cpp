/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HasNNearbyVisibleUnitsRequirement.hpp>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
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

yordle::data::meta::HasNNearbyVisibleUnitsRequirement::HasNNearbyVisibleUnitsRequirement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICastRequirement(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mUnitsRequirements = prop->cast_prop<yordle::data::prop::set_prop>(1519291675u);
    if(ptr_mUnitsRequirements != nullptr) {
        for(const auto &set_mUnitsRequirements_entry : ptr_mUnitsRequirements->value) {
            auto ptr_mUnitsRequirements_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mUnitsRequirements_entry);
            if(ptr_mUnitsRequirements_entry != nullptr) {
                mUnitsRequirements.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ICastRequirement>(ptr_mUnitsRequirements_entry, 1550969638u));
            }
        }
    }

    auto ptr_mUnitsRequired = prop->cast_prop<yordle::data::prop::uint32_prop>(2670354330u);
    if(ptr_mUnitsRequired != nullptr) {
        mUnitsRequired = ptr_mUnitsRequired->value;
    }

    auto ptr_mRange = prop->cast_prop<yordle::data::prop::float32_prop>(1741401325u);
    if(ptr_mRange != nullptr) {
        mRange = ptr_mRange->value;
    }

    auto ptr_mDistanceType = prop->cast_prop<yordle::data::prop::uint32_prop>(1524285035u);
    if(ptr_mDistanceType != nullptr) {
        mDistanceType = ptr_mDistanceType->value;
    }
}
