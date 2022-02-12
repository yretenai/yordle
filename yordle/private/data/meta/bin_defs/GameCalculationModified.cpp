/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GameCalculationModified.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
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

yordle::data::meta::GameCalculationModified::GameCalculationModified(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculation(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mOverrideSpellLevel = prop->cast_prop<yordle::data::prop::optional_prop>(3931102800u);
    if(ptr_mOverrideSpellLevel != nullptr) {
        auto ptr_mOverrideSpellLevel_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int32_prop>(ptr_mOverrideSpellLevel->value);
        if (ptr_mOverrideSpellLevel_opt != nullptr) {
            mOverrideSpellLevel = ptr_mOverrideSpellLevel_opt->value;
        }
    }

    auto ptr_mModifiedGameCalculation = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2140393294u);
    if(ptr_mModifiedGameCalculation != nullptr) {
        mModifiedGameCalculation = ptr_mModifiedGameCalculation->value;
    }
}
