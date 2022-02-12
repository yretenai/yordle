/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/WallFollowMovement.hpp>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
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

yordle::data::meta::WallFollowMovement::WallFollowMovement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileMovementSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mInferDirectionFromFacingIfNeeded = prop->cast_prop<yordle::data::prop::bool_prop>(2046346341u);
    if(ptr_mInferDirectionFromFacingIfNeeded != nullptr) {
        mInferDirectionFromFacingIfNeeded = ptr_mInferDirectionFromFacingIfNeeded->value;
    }

    auto ptr_mProjectTargetToCastRange = prop->cast_prop<yordle::data::prop::bool_prop>(665175815u);
    if(ptr_mProjectTargetToCastRange != nullptr) {
        mProjectTargetToCastRange = ptr_mProjectTargetToCastRange->value;
    }

    auto ptr_mUseGroundHeightAtTarget = prop->cast_prop<yordle::data::prop::bool_prop>(1847500467u);
    if(ptr_mUseGroundHeightAtTarget != nullptr) {
        mUseGroundHeightAtTarget = ptr_mUseGroundHeightAtTarget->value;
    }

    auto ptr_mSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(1287742835u);
    if(ptr_mSpeed != nullptr) {
        mSpeed = ptr_mSpeed->value;
    }

    auto ptr_mCounterClockwise = prop->cast_prop<yordle::data::prop::bool_prop>(1289482586u);
    if(ptr_mCounterClockwise != nullptr) {
        mCounterClockwise = ptr_mCounterClockwise->value;
    }

    auto ptr_mWallOffset = prop->cast_prop<yordle::data::prop::float32_prop>(2261403255u);
    if(ptr_mWallOffset != nullptr) {
        mWallOffset = ptr_mWallOffset->value;
    }

    auto ptr_mWallLength = prop->cast_prop<yordle::data::prop::float32_prop>(3085905440u);
    if(ptr_mWallLength != nullptr) {
        mWallLength = ptr_mWallLength->value;
    }

    auto ptr_mWallSearchRadius = prop->cast_prop<yordle::data::prop::float32_prop>(3936574710u);
    if(ptr_mWallSearchRadius != nullptr) {
        mWallSearchRadius = ptr_mWallSearchRadius->value;
    }

    auto ptr_xbcff2ee1 = prop->cast_prop<yordle::data::prop::bool_prop>(3170840289u);
    if(ptr_xbcff2ee1 != nullptr) {
        xbcff2ee1 = ptr_xbcff2ee1->value;
    }

    auto ptr_x38872364 = prop->cast_prop<yordle::data::prop::bool_prop>(948380516u);
    if(ptr_x38872364 != nullptr) {
        x38872364 = ptr_x38872364->value;
    }
}
