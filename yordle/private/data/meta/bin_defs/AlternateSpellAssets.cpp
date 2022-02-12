/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AlternateSpellAssets.hpp>

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

yordle::data::meta::AlternateSpellAssets::AlternateSpellAssets(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAnimationName = prop->cast_prop<yordle::data::prop::string_prop>(4224806837u);
    if(ptr_mAnimationName != nullptr) {
        mAnimationName = ptr_mAnimationName->value;
    }

    auto ptr_mAnimationLoopName = prop->cast_prop<yordle::data::prop::string_prop>(232091943u);
    if(ptr_mAnimationLoopName != nullptr) {
        mAnimationLoopName = ptr_mAnimationLoopName->value;
    }

    auto ptr_mAnimationWinddownName = prop->cast_prop<yordle::data::prop::string_prop>(4009553947u);
    if(ptr_mAnimationWinddownName != nullptr) {
        mAnimationWinddownName = ptr_mAnimationWinddownName->value;
    }

    auto ptr_mAnimationLeadOutName = prop->cast_prop<yordle::data::prop::string_prop>(3242492963u);
    if(ptr_mAnimationLeadOutName != nullptr) {
        mAnimationLeadOutName = ptr_mAnimationLeadOutName->value;
    }

    auto ptr_mUseAnimatorFramerate = prop->cast_prop<yordle::data::prop::bool_prop>(2883554725u);
    if(ptr_mUseAnimatorFramerate != nullptr) {
        mUseAnimatorFramerate = ptr_mUseAnimatorFramerate->value;
    }

    auto ptr_mHitEffectOrientType = prop->cast_prop<yordle::data::prop::uint32_prop>(597649493u);
    if(ptr_mHitEffectOrientType != nullptr) {
        mHitEffectOrientType = ptr_mHitEffectOrientType->value;
    }

    auto ptr_mHaveHitEffect = prop->cast_prop<yordle::data::prop::bool_prop>(3054978970u);
    if(ptr_mHaveHitEffect != nullptr) {
        mHaveHitEffect = ptr_mHaveHitEffect->value;
    }

    auto ptr_mHaveHitBone = prop->cast_prop<yordle::data::prop::bool_prop>(1645205029u);
    if(ptr_mHaveHitBone != nullptr) {
        mHaveHitBone = ptr_mHaveHitBone->value;
    }

    auto ptr_mHitBoneName = prop->cast_prop<yordle::data::prop::string_prop>(1987442212u);
    if(ptr_mHitBoneName != nullptr) {
        mHitBoneName = ptr_mHitBoneName->value;
    }

    auto ptr_mHitEffectKey = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2073816859u);
    if(ptr_mHitEffectKey != nullptr) {
        mHitEffectKey = ptr_mHitEffectKey->value;
    }

    auto ptr_mHitEffectName = prop->cast_prop<yordle::data::prop::string_prop>(3229736615u);
    if(ptr_mHitEffectName != nullptr) {
        mHitEffectName = ptr_mHitEffectName->value;
    }

    auto ptr_mHitEffectPlayerKey = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1033543528u);
    if(ptr_mHitEffectPlayerKey != nullptr) {
        mHitEffectPlayerKey = ptr_mHitEffectPlayerKey->value;
    }

    auto ptr_mHitEffectPlayerName = prop->cast_prop<yordle::data::prop::string_prop>(3753364890u);
    if(ptr_mHitEffectPlayerName != nullptr) {
        mHitEffectPlayerName = ptr_mHitEffectPlayerName->value;
    }

    auto ptr_mAfterEffectKey = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3602710262u);
    if(ptr_mAfterEffectKey != nullptr) {
        mAfterEffectKey = ptr_mAfterEffectKey->value;
    }

    auto ptr_mAfterEffectName = prop->cast_prop<yordle::data::prop::string_prop>(2538046572u);
    if(ptr_mAfterEffectName != nullptr) {
        mAfterEffectName = ptr_mAfterEffectName->value;
    }
}
