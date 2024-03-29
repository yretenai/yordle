/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ConditionFloatClipData.hpp>

#include <yordle/data/meta/bin_defs/xec2d115.hpp>
#include <yordle/data/meta/bin_defs/ConditionFloatPairData.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
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

yordle::data::meta::ConditionFloatClipData::ConditionFloatClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ClipBaseData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x16860572 = prop->cast_prop<yordle::data::prop::structure_prop>(377881970u);
    if(ptr_x16860572 != nullptr) {
        x16860572 = yordle::data::meta::deserialize<yordle::data::meta::xec2d115>(ptr_x16860572, 247648533u);
    }

    auto ptr_mChangeAnimationMidPlay = prop->cast_prop<yordle::data::prop::bool_prop>(1177069846u);
    if(ptr_mChangeAnimationMidPlay != nullptr) {
        mChangeAnimationMidPlay = ptr_mChangeAnimationMidPlay->value;
    }

    auto ptr_x94c90e2b = prop->cast_prop<yordle::data::prop::bool_prop>(2496204331u);
    if(ptr_x94c90e2b != nullptr) {
        x94c90e2b = ptr_x94c90e2b->value;
    }

    auto ptr_x31db4e6a = prop->cast_prop<yordle::data::prop::bool_prop>(836456042u);
    if(ptr_x31db4e6a != nullptr) {
        x31db4e6a = ptr_x31db4e6a->value;
    }

    auto ptr_x92213dee = prop->cast_prop<yordle::data::prop::bool_prop>(2451652078u);
    if(ptr_x92213dee != nullptr) {
        x92213dee = ptr_x92213dee->value;
    }

    auto ptr_mChildAnimDelaySwitchTime = prop->cast_prop<yordle::data::prop::float32_prop>(3722708743u);
    if(ptr_mChildAnimDelaySwitchTime != nullptr) {
        mChildAnimDelaySwitchTime = ptr_mChildAnimDelaySwitchTime->value;
    }

    auto ptr_mConditionFloatPairDataList = prop->cast_prop<yordle::data::prop::set_prop>(589950661u);
    if(ptr_mConditionFloatPairDataList != nullptr) {
        for(const auto &set_mConditionFloatPairDataList_entry : ptr_mConditionFloatPairDataList->value) {
            auto ptr_mConditionFloatPairDataList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mConditionFloatPairDataList_entry);
            if(ptr_mConditionFloatPairDataList_entry != nullptr) {
                mConditionFloatPairDataList.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::ConditionFloatPairData>(ptr_mConditionFloatPairDataList_entry, 1675919456u));
            }
        }
    }
}
