/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AbilityResourceThresholdIndicatorRange.hpp>

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

yordle::data::meta::AbilityResourceThresholdIndicatorRange::AbilityResourceThresholdIndicatorRange(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_rangeStart = prop->cast_prop<yordle::data::prop::float32_prop>(1683359434u);
    if(ptr_rangeStart != nullptr) {
        rangeStart = ptr_rangeStart->value;
    }

    auto ptr_rangeEnd = prop->cast_prop<yordle::data::prop::float32_prop>(1656925471u);
    if(ptr_rangeEnd != nullptr) {
        rangeEnd = ptr_rangeEnd->value;
    }
}
