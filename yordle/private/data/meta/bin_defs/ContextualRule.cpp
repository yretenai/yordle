/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ContextualRule.hpp>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
#include <yordle/data/meta/bin_defs/ContextualActionPlayAudio.hpp>
#include <yordle/data/meta/bin_defs/ContextualActionPlayAnimation.hpp>
#include <yordle/data/meta/bin_defs/ContextualActionTriggerEvent.hpp>
#include <yordle/data/meta/bin_defs/x15f6e07a.hpp>
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

yordle::data::meta::ContextualRule::ContextualRule(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mConditionRelationship = prop->cast_prop<yordle::data::prop::uint32_prop>(2393837363u);
    if(ptr_mConditionRelationship != nullptr) {
        mConditionRelationship = ptr_mConditionRelationship->value;
    }

    auto ptr_mConditions = prop->cast_prop<yordle::data::prop::set_prop>(721382474u);
    if(ptr_mConditions != nullptr) {
        for(const auto &set_mConditions_entry : ptr_mConditions->value) {
            auto ptr_mConditions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_mConditions_entry);
            if(ptr_mConditions_entry != nullptr) {
                mConditions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::IContextualCondition>(ptr_mConditions_entry, 3400586476u));
            }
        }
    }

    auto ptr_mAudioAction = prop->cast_prop<yordle::data::prop::structure_prop>(3719046512u);
    if(ptr_mAudioAction != nullptr) {
        mAudioAction = yordle::data::meta::deserialize<yordle::data::meta::ContextualActionPlayAudio>(ptr_mAudioAction, 1668724992u);
    }

    auto ptr_mAnimationAction = prop->cast_prop<yordle::data::prop::structure_prop>(1379841852u);
    if(ptr_mAnimationAction != nullptr) {
        mAnimationAction = yordle::data::meta::deserialize<yordle::data::meta::ContextualActionPlayAnimation>(ptr_mAnimationAction, 3095435268u);
    }

    auto ptr_mTriggerEventAction = prop->cast_prop<yordle::data::prop::structure_prop>(3448342398u);
    if(ptr_mTriggerEventAction != nullptr) {
        mTriggerEventAction = yordle::data::meta::deserialize<yordle::data::meta::ContextualActionTriggerEvent>(ptr_mTriggerEventAction, 500070696u);
    }

    auto ptr_mPriority = prop->cast_prop<yordle::data::prop::optional_prop>(259093296u);
    if(ptr_mPriority != nullptr) {
        auto ptr_mPriority_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_mPriority->value);
        if (ptr_mPriority_opt != nullptr) {
            mPriority = ptr_mPriority_opt->value;
        }
    }

    auto ptr_x68fee3c4 = prop->cast_prop<yordle::data::prop::bool_prop>(1761534916u);
    if(ptr_x68fee3c4 != nullptr) {
        x68fee3c4 = ptr_x68fee3c4->value;
    }

    auto ptr_x98b66135 = prop->cast_prop<yordle::data::prop::structure_prop>(2562089269u);
    if(ptr_x98b66135 != nullptr) {
        x98b66135 = yordle::data::meta::deserialize<yordle::data::meta::x15f6e07a>(ptr_x98b66135, 368500858u);
    }
}
