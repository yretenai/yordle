/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FixedDistanceIgnoringTerrain.hpp>

#include <yordle/data/meta/bin_defs/TargeterDefinitionSkipTerrain.hpp>
#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
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

yordle::data::meta::FixedDistanceIgnoringTerrain::FixedDistanceIgnoringTerrain(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileBehaviorSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mMaximumDistance = prop->cast_prop<yordle::data::prop::float32_prop>(1908713741u);
    if(ptr_mMaximumDistance != nullptr) {
        mMaximumDistance = ptr_mMaximumDistance->value;
    }

    auto ptr_mMinimumGapBetweenTerrainWalls = prop->cast_prop<yordle::data::prop::float32_prop>(3025224742u);
    if(ptr_mMinimumGapBetweenTerrainWalls != nullptr) {
        mMinimumGapBetweenTerrainWalls = ptr_mMinimumGapBetweenTerrainWalls->value;
    }

    auto ptr_mMaximumTerrainWallsToSkip = prop->cast_prop<yordle::data::prop::optional_prop>(3775348694u);
    if(ptr_mMaximumTerrainWallsToSkip != nullptr) {
        auto ptr_mMaximumTerrainWallsToSkip_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_mMaximumTerrainWallsToSkip->value);
        if (ptr_mMaximumTerrainWallsToSkip_opt != nullptr) {
            mMaximumTerrainWallsToSkip = ptr_mMaximumTerrainWallsToSkip_opt->value;
        }
    }

    auto ptr_scanWidthOverride = prop->cast_prop<yordle::data::prop::optional_prop>(282150412u);
    if(ptr_scanWidthOverride != nullptr) {
        auto ptr_scanWidthOverride_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_scanWidthOverride->value);
        if (ptr_scanWidthOverride_opt != nullptr) {
            scanWidthOverride = ptr_scanWidthOverride_opt->value;
        }
    }

    auto ptr_mTargeterDefinition = prop->cast_prop<yordle::data::prop::structure_prop>(3263115659u);
    if(ptr_mTargeterDefinition != nullptr) {
        mTargeterDefinition = yordle::data::meta::deserialize<yordle::data::meta::TargeterDefinitionSkipTerrain>(ptr_mTargeterDefinition, 3994921506u);
    }
}
