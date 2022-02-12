/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ClearTargetAndKeepMoving.hpp>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
#include <yordle/data/meta/bin_defs/MissileTriggeredActionSpec.hpp>
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

yordle::data::meta::ClearTargetAndKeepMoving::ClearTargetAndKeepMoving(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MissileTriggeredActionSpec(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mOverrideHeightAugment = prop->cast_prop<yordle::data::prop::optional_prop>(1145244202u);
    if(ptr_mOverrideHeightAugment != nullptr) {
        auto ptr_mOverrideHeightAugment_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mOverrideHeightAugment->value);
        if (ptr_mOverrideHeightAugment_opt != nullptr) {
            mOverrideHeightAugment = ptr_mOverrideHeightAugment_opt->value;
        }
    }

    auto ptr_mOverrideRange = prop->cast_prop<yordle::data::prop::optional_prop>(3941935197u);
    if(ptr_mOverrideRange != nullptr) {
        auto ptr_mOverrideRange_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_mOverrideRange->value);
        if (ptr_mOverrideRange_opt != nullptr) {
            mOverrideRange = ptr_mOverrideRange_opt->value;
        }
    }

    auto ptr_mOverrideMovement = prop->cast_prop<yordle::data::prop::structure_prop>(4259506493u);
    if(ptr_mOverrideMovement != nullptr) {
        mOverrideMovement = yordle::data::meta::deserialize<yordle::data::meta::MissileMovementSpec>(ptr_mOverrideMovement, 1798110077u);
    }
}