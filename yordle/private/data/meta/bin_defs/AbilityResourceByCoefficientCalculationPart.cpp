/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/AbilityResourceByCoefficientCalculationPart.hpp>

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

yordle::data::meta::AbilityResourceByCoefficientCalculationPart::AbilityResourceByCoefficientCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IGameCalculationPart(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mCoefficient = prop->cast_prop<yordle::data::prop::float32_prop>(693905545u);
    if(ptr_mCoefficient != nullptr) {
        mCoefficient = ptr_mCoefficient->value;
    }

    auto ptr_mAbilityResource = prop->cast_prop<yordle::data::prop::uint8_prop>(1306624758u);
    if(ptr_mAbilityResource != nullptr) {
        mAbilityResource = ptr_mAbilityResource->value;
    }

    auto ptr_mStatFormula = prop->cast_prop<yordle::data::prop::uint8_prop>(2100383980u);
    if(ptr_mStatFormula != nullptr) {
        mStatFormula = ptr_mStatFormula->value;
    }
}