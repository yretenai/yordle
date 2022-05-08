/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GlobalStatsUIData.hpp>

#include <yordle/data/meta/bin_defs/StatUIData.hpp>
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

yordle::data::meta::GlobalStatsUIData::GlobalStatsUIData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mStatUIData = prop->cast_prop<yordle::data::prop::map_prop>(602756116u);
    if(ptr_mStatUIData != nullptr) {
        for(const auto &set_mStatUIData_pair : ptr_mStatUIData->value) {
            auto ptr_mStatUIData_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_mStatUIData_pair.first);
            auto ptr_mStatUIData_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_mStatUIData_pair.second);
            if(ptr_mStatUIData_key != nullptr && ptr_mStatUIData_value != nullptr) {
                mStatUIData.emplace(ptr_mStatUIData_key->value, yordle::data::meta::deserialize<yordle::data::meta::StatUIData>(ptr_mStatUIData_value, 309827837u));
            }
        }
    }

    auto ptr_xef8fe151 = prop->cast_prop<yordle::data::prop::map_prop>(4019183953u);
    if(ptr_xef8fe151 != nullptr) {
        for(const auto &set_xef8fe151_pair : ptr_xef8fe151->value) {
            auto ptr_xef8fe151_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint8_prop>(set_xef8fe151_pair.first);
            auto ptr_xef8fe151_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xef8fe151_pair.second);
            if(ptr_xef8fe151_key != nullptr && ptr_xef8fe151_value != nullptr) {
                xef8fe151.emplace(ptr_xef8fe151_key->value, yordle::data::meta::deserialize<yordle::data::meta::StatUIData>(ptr_xef8fe151_value, 309827837u));
            }
        }
    }

    auto ptr_BaseOutputIconModifier = prop->cast_prop<yordle::data::prop::string_prop>(3133585001u);
    if(ptr_BaseOutputIconModifier != nullptr) {
        BaseOutputIconModifier = ptr_BaseOutputIconModifier->value;
    }

    auto ptr_BonusOutputIconModifier = prop->cast_prop<yordle::data::prop::string_prop>(2757277781u);
    if(ptr_BonusOutputIconModifier != nullptr) {
        BonusOutputIconModifier = ptr_BonusOutputIconModifier->value;
    }

    auto ptr_mNumberStyle = prop->cast_prop<yordle::data::prop::string_prop>(3444945562u);
    if(ptr_mNumberStyle != nullptr) {
        mNumberStyle = ptr_mNumberStyle->value;
    }

    auto ptr_mNumberStylePercent = prop->cast_prop<yordle::data::prop::string_prop>(1205163307u);
    if(ptr_mNumberStylePercent != nullptr) {
        mNumberStylePercent = ptr_mNumberStylePercent->value;
    }

    auto ptr_mNumberStyleBonus = prop->cast_prop<yordle::data::prop::string_prop>(801862189u);
    if(ptr_mNumberStyleBonus != nullptr) {
        mNumberStyleBonus = ptr_mNumberStyleBonus->value;
    }

    auto ptr_mNumberStyleBonusPercent = prop->cast_prop<yordle::data::prop::string_prop>(1961875618u);
    if(ptr_mNumberStyleBonusPercent != nullptr) {
        mNumberStyleBonusPercent = ptr_mNumberStyleBonusPercent->value;
    }

    auto ptr_FormulaPartStyleBonus = prop->cast_prop<yordle::data::prop::string_prop>(2611516976u);
    if(ptr_FormulaPartStyleBonus != nullptr) {
        FormulaPartStyleBonus = ptr_FormulaPartStyleBonus->value;
    }

    auto ptr_FormulaPartStyleBonusPercent = prop->cast_prop<yordle::data::prop::string_prop>(363059393u);
    if(ptr_FormulaPartStyleBonusPercent != nullptr) {
        FormulaPartStyleBonusPercent = ptr_FormulaPartStyleBonusPercent->value;
    }

    auto ptr_FormulaPartStyle = prop->cast_prop<yordle::data::prop::string_prop>(517944321u);
    if(ptr_FormulaPartStyle != nullptr) {
        FormulaPartStyle = ptr_FormulaPartStyle->value;
    }

    auto ptr_FormulaPartStylePercent = prop->cast_prop<yordle::data::prop::string_prop>(3885466478u);
    if(ptr_FormulaPartStylePercent != nullptr) {
        FormulaPartStylePercent = ptr_FormulaPartStylePercent->value;
    }

    auto ptr_FormulaPartRangeStyleBonus = prop->cast_prop<yordle::data::prop::string_prop>(572538325u);
    if(ptr_FormulaPartRangeStyleBonus != nullptr) {
        FormulaPartRangeStyleBonus = ptr_FormulaPartRangeStyleBonus->value;
    }

    auto ptr_FormulaPartRangeStyleBonusPercent = prop->cast_prop<yordle::data::prop::string_prop>(1165969578u);
    if(ptr_FormulaPartRangeStyleBonusPercent != nullptr) {
        FormulaPartRangeStyleBonusPercent = ptr_FormulaPartRangeStyleBonusPercent->value;
    }

    auto ptr_FormulaPartRangeStyle = prop->cast_prop<yordle::data::prop::string_prop>(3069567922u);
    if(ptr_FormulaPartRangeStyle != nullptr) {
        FormulaPartRangeStyle = ptr_FormulaPartRangeStyle->value;
    }

    auto ptr_FormulaPartRangeStylePercent = prop->cast_prop<yordle::data::prop::string_prop>(393775843u);
    if(ptr_FormulaPartRangeStylePercent != nullptr) {
        FormulaPartRangeStylePercent = ptr_FormulaPartRangeStylePercent->value;
    }

    auto ptr_mNumberStyleTotalAndCoefficient = prop->cast_prop<yordle::data::prop::string_prop>(3024034466u);
    if(ptr_mNumberStyleTotalAndCoefficient != nullptr) {
        mNumberStyleTotalAndCoefficient = ptr_mNumberStyleTotalAndCoefficient->value;
    }

    auto ptr_mNumberStyleTotalAndCoefficientPercent = prop->cast_prop<yordle::data::prop::string_prop>(465320723u);
    if(ptr_mNumberStyleTotalAndCoefficientPercent != nullptr) {
        mNumberStyleTotalAndCoefficientPercent = ptr_mNumberStyleTotalAndCoefficientPercent->value;
    }

    auto ptr_NumberStyleTotalAndScalingIcons = prop->cast_prop<yordle::data::prop::string_prop>(3901102167u);
    if(ptr_NumberStyleTotalAndScalingIcons != nullptr) {
        NumberStyleTotalAndScalingIcons = ptr_NumberStyleTotalAndScalingIcons->value;
    }

    auto ptr_NumberStyleTotalAndFormula = prop->cast_prop<yordle::data::prop::string_prop>(178171280u);
    if(ptr_NumberStyleTotalAndFormula != nullptr) {
        NumberStyleTotalAndFormula = ptr_NumberStyleTotalAndFormula->value;
    }

    auto ptr_mManaIconKey = prop->cast_prop<yordle::data::prop::string_prop>(3983319277u);
    if(ptr_mManaIconKey != nullptr) {
        mManaIconKey = ptr_mManaIconKey->value;
    }

    auto ptr_mManaScalingTagKey = prop->cast_prop<yordle::data::prop::string_prop>(3917617343u);
    if(ptr_mManaScalingTagKey != nullptr) {
        mManaScalingTagKey = ptr_mManaScalingTagKey->value;
    }

    auto ptr_x2fa6c4b0 = prop->cast_prop<yordle::data::prop::string_prop>(799458480u);
    if(ptr_x2fa6c4b0 != nullptr) {
        x2fa6c4b0 = ptr_x2fa6c4b0->value;
    }

    auto ptr_x4ac09eef = prop->cast_prop<yordle::data::prop::string_prop>(1254137583u);
    if(ptr_x4ac09eef != nullptr) {
        x4ac09eef = ptr_x4ac09eef->value;
    }

    auto ptr_xf04c21cd = prop->cast_prop<yordle::data::prop::uint8_prop>(4031521229u);
    if(ptr_xf04c21cd != nullptr) {
        xf04c21cd = ptr_xf04c21cd->value;
    }

    auto ptr_xa844caca = prop->cast_prop<yordle::data::prop::uint8_prop>(2823080650u);
    if(ptr_xa844caca != nullptr) {
        xa844caca = ptr_xa844caca->value;
    }

    auto ptr_x97343c80 = prop->cast_prop<yordle::data::prop::uint8_prop>(2536782976u);
    if(ptr_x97343c80 != nullptr) {
        x97343c80 = ptr_x97343c80->value;
    }
}
