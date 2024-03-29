/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTStreak.hpp>

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

yordle::data::meta::TFTStreak::TFTStreak(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mMinimumStreakLength = prop->cast_prop<yordle::data::prop::optional_prop>(2940314578u);
    if(ptr_mMinimumStreakLength != nullptr) {
        auto ptr_mMinimumStreakLength_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_mMinimumStreakLength->value);
        if (ptr_mMinimumStreakLength_opt != nullptr) {
            mMinimumStreakLength = ptr_mMinimumStreakLength_opt->value;
        }
    }

    auto ptr_mMaximumStreakLength = prop->cast_prop<yordle::data::prop::optional_prop>(3076655600u);
    if(ptr_mMaximumStreakLength != nullptr) {
        auto ptr_mMaximumStreakLength_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint32_prop>(ptr_mMaximumStreakLength->value);
        if (ptr_mMaximumStreakLength_opt != nullptr) {
            mMaximumStreakLength = ptr_mMaximumStreakLength_opt->value;
        }
    }

    auto ptr_mGoldRewardAmount = prop->cast_prop<yordle::data::prop::uint32_prop>(3278832061u);
    if(ptr_mGoldRewardAmount != nullptr) {
        mGoldRewardAmount = ptr_mGoldRewardAmount->value;
    }

    auto ptr_mStreakFormat = prop->cast_prop<yordle::data::prop::string_prop>(3234469753u);
    if(ptr_mStreakFormat != nullptr) {
        mStreakFormat = ptr_mStreakFormat->value;
    }
}
