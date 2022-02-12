/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DeathTimesScalingPoint.hpp>

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

yordle::data::meta::DeathTimesScalingPoint::DeathTimesScalingPoint(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStartTime = prop->cast_prop<yordle::data::prop::uint32_prop>(4200122501u);
    if(ptr_mStartTime != nullptr) {
        mStartTime = ptr_mStartTime->value;
    }

    auto ptr_mPercentIncrease = prop->cast_prop<yordle::data::prop::float32_prop>(467813609u);
    if(ptr_mPercentIncrease != nullptr) {
        mPercentIncrease = ptr_mPercentIncrease->value;
    }
}