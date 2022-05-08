/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ConformToPathRigPoseModifierData.hpp>

#include <yordle/data/meta/bin_defs/xa5584548.hpp>
#include <yordle/data/meta/bin_defs/BaseRigPoseModifierData.hpp>
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

yordle::data::meta::ConformToPathRigPoseModifierData::ConformToPathRigPoseModifierData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseRigPoseModifierData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStartingJointName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3332956195u);
    if(ptr_mStartingJointName != nullptr) {
        mStartingJointName = ptr_mStartingJointName->value;
    }

    auto ptr_mEndingJointName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2530986134u);
    if(ptr_mEndingJointName != nullptr) {
        mEndingJointName = ptr_mEndingJointName->value;
    }

    auto ptr_mDefaultMaskName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1344738098u);
    if(ptr_mDefaultMaskName != nullptr) {
        mDefaultMaskName = ptr_mDefaultMaskName->value;
    }

    auto ptr_mMaxBoneAngle = prop->cast_prop<yordle::data::prop::float32_prop>(2478307955u);
    if(ptr_mMaxBoneAngle != nullptr) {
        mMaxBoneAngle = ptr_mMaxBoneAngle->value;
    }

    auto ptr_mDampingValue = prop->cast_prop<yordle::data::prop::float32_prop>(4210191615u);
    if(ptr_mDampingValue != nullptr) {
        mDampingValue = ptr_mDampingValue->value;
    }

    auto ptr_mVelMultiplier = prop->cast_prop<yordle::data::prop::float32_prop>(847828696u);
    if(ptr_mVelMultiplier != nullptr) {
        mVelMultiplier = ptr_mVelMultiplier->value;
    }

    auto ptr_mFrequency = prop->cast_prop<yordle::data::prop::float32_prop>(825003174u);
    if(ptr_mFrequency != nullptr) {
        mFrequency = ptr_mFrequency->value;
    }

    auto ptr_xa550c40c = prop->cast_prop<yordle::data::prop::bool_prop>(2773533708u);
    if(ptr_xa550c40c != nullptr) {
        xa550c40c = ptr_xa550c40c->value;
    }

    auto ptr_xa4e3d433 = prop->cast_prop<yordle::data::prop::bool_prop>(2766394419u);
    if(ptr_xa4e3d433 != nullptr) {
        xa4e3d433 = ptr_xa4e3d433->value;
    }

    auto ptr_ActivationDistance = prop->cast_prop<yordle::data::prop::float32_prop>(4011335866u);
    if(ptr_ActivationDistance != nullptr) {
        ActivationDistance = ptr_ActivationDistance->value;
    }

    auto ptr_x6d3315f3 = prop->cast_prop<yordle::data::prop::float32_prop>(1832064499u);
    if(ptr_x6d3315f3 != nullptr) {
        x6d3315f3 = ptr_x6d3315f3->value;
    }

    auto ptr_xafc0620 = prop->cast_prop<yordle::data::prop::float32_prop>(184288800u);
    if(ptr_xafc0620 != nullptr) {
        xafc0620 = ptr_xafc0620->value;
    }

    auto ptr_xf1f20249 = prop->cast_prop<yordle::data::prop::set_prop>(4059169353u);
    if(ptr_xf1f20249 != nullptr) {
        for(const auto &set_xf1f20249_entry : ptr_xf1f20249->value) {
            auto ptr_xf1f20249_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xf1f20249_entry);
            if(ptr_xf1f20249_entry != nullptr) {
                xf1f20249.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::xa5584548>(ptr_xf1f20249_entry, 2774025544u));
            }
        }
    }
}
