/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/BaseEventData.hpp>

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

yordle::data::meta::BaseEventData::BaseEventData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mIsSelfOnly = prop->cast_prop<yordle::data::prop::bool_prop>(1217133356u);
    if(ptr_mIsSelfOnly != nullptr) {
        mIsSelfOnly = ptr_mIsSelfOnly->value;
    }

    auto ptr_mFireIfAnimationEndsEarly = prop->cast_prop<yordle::data::prop::bool_prop>(2710483352u);
    if(ptr_mFireIfAnimationEndsEarly != nullptr) {
        mFireIfAnimationEndsEarly = ptr_mFireIfAnimationEndsEarly->value;
    }

    auto ptr_mStartFrame = prop->cast_prop<yordle::data::prop::float32_prop>(621607905u);
    if(ptr_mStartFrame != nullptr) {
        mStartFrame = ptr_mStartFrame->value;
    }

    auto ptr_mEndFrame = prop->cast_prop<yordle::data::prop::float32_prop>(3072661310u);
    if(ptr_mEndFrame != nullptr) {
        mEndFrame = ptr_mEndFrame->value;
    }

    auto ptr_mName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }
}
