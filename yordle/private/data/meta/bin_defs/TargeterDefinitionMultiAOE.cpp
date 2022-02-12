/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TargeterDefinitionMultiAOE.hpp>

#include <yordle/data/meta/bin_defs/DrawablePositionLocator.hpp>
#include <yordle/data/meta/bin_defs/FloatPerSpellLevel.hpp>
#include <yordle/data/meta/bin_defs/TargeterDefinition.hpp>
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

yordle::data::meta::TargeterDefinitionMultiAOE::TargeterDefinitionMultiAOE(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::TargeterDefinition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_centerLocator = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3558690766u);
    if(ptr_centerLocator != nullptr) {
        centerLocator = yordle::data::meta::deserialize<yordle::data::meta::DrawablePositionLocator>(ptr_centerLocator, 3451066870u);
    }

    auto ptr_overrideAOERadius = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3284550930u);
    if(ptr_overrideAOERadius != nullptr) {
        overrideAOERadius = yordle::data::meta::deserialize<yordle::data::meta::FloatPerSpellLevel>(ptr_overrideAOERadius, 508250748u);
    }

    auto ptr_overrideMinCastRange = prop->cast_prop<yordle::data::prop::inline_structure_prop>(691238949u);
    if(ptr_overrideMinCastRange != nullptr) {
        overrideMinCastRange = yordle::data::meta::deserialize<yordle::data::meta::FloatPerSpellLevel>(ptr_overrideMinCastRange, 508250748u);
    }

    auto ptr_overrideMaxCastRange = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3803788367u);
    if(ptr_overrideMaxCastRange != nullptr) {
        overrideMaxCastRange = yordle::data::meta::deserialize<yordle::data::meta::FloatPerSpellLevel>(ptr_overrideMaxCastRange, 508250748u);
    }

    auto ptr_angelOffsetRadian = prop->cast_prop<yordle::data::prop::float32_prop>(607438176u);
    if(ptr_angelOffsetRadian != nullptr) {
        angelOffsetRadian = ptr_angelOffsetRadian->value;
    }

    auto ptr_numOfInnerAOE = prop->cast_prop<yordle::data::prop::uint32_prop>(4233797121u);
    if(ptr_numOfInnerAOE != nullptr) {
        numOfInnerAOE = ptr_numOfInnerAOE->value;
    }

    auto ptr_leftTextureName = prop->cast_prop<yordle::data::prop::string_prop>(2717583856u);
    if(ptr_leftTextureName != nullptr) {
        leftTextureName = ptr_leftTextureName->value;
    }

    auto ptr_rightTextureName = prop->cast_prop<yordle::data::prop::string_prop>(2583486863u);
    if(ptr_rightTextureName != nullptr) {
        rightTextureName = ptr_rightTextureName->value;
    }

    auto ptr_innerTextureName = prop->cast_prop<yordle::data::prop::string_prop>(1790616037u);
    if(ptr_innerTextureName != nullptr) {
        innerTextureName = ptr_innerTextureName->value;
    }
}