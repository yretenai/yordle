/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/IGameCalculationPartWithBuffCounter.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
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

yordle::data::meta::IGameCalculationPartWithBuffCounter::IGameCalculationPartWithBuffCounter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPart(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mBuffName = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(38338834u);
    if(ptr_mBuffName != nullptr) {
        mBuffName = ptr_mBuffName->value;
    }

    auto ptr_mIconKey = prop->cast_prop<yordle::data::prop::string_prop>(9297440u);
    if(ptr_mIconKey != nullptr) {
        mIconKey = ptr_mIconKey->value;
    }

    auto ptr_mScalingTagKey = prop->cast_prop<yordle::data::prop::string_prop>(3047920162u);
    if(ptr_mScalingTagKey != nullptr) {
        mScalingTagKey = ptr_mScalingTagKey->value;
    }
}