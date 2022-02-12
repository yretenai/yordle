/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TargeterDefinitionArc.hpp>

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

yordle::data::meta::TargeterDefinitionArc::TargeterDefinitionArc(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::TargeterDefinition(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_startLocator = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3361525483u);
    if(ptr_startLocator != nullptr) {
        startLocator = yordle::data::meta::deserialize<yordle::data::meta::DrawablePositionLocator>(ptr_startLocator, 3451066870u);
    }

    auto ptr_endLocator = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1328338192u);
    if(ptr_endLocator != nullptr) {
        endLocator = yordle::data::meta::deserialize<yordle::data::meta::DrawablePositionLocator>(ptr_endLocator, 3451066870u);
    }

    auto ptr_isClockwiseArc = prop->cast_prop<yordle::data::prop::bool_prop>(1368166107u);
    if(ptr_isClockwiseArc != nullptr) {
        isClockwiseArc = ptr_isClockwiseArc->value;
    }

    auto ptr_isConstrainedToRange = prop->cast_prop<yordle::data::prop::bool_prop>(1895138867u);
    if(ptr_isConstrainedToRange != nullptr) {
        isConstrainedToRange = ptr_isConstrainedToRange->value;
    }

    auto ptr_constraintRange = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1790621383u);
    if(ptr_constraintRange != nullptr) {
        constraintRange = yordle::data::meta::deserialize<yordle::data::meta::FloatPerSpellLevel>(ptr_constraintRange, 508250748u);
    }

    auto ptr_overrideRadius = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3263025179u);
    if(ptr_overrideRadius != nullptr) {
        overrideRadius = yordle::data::meta::deserialize<yordle::data::meta::FloatPerSpellLevel>(ptr_overrideRadius, 508250748u);
    }

    auto ptr_textureArcOverrideName = prop->cast_prop<yordle::data::prop::string_prop>(2181720239u);
    if(ptr_textureArcOverrideName != nullptr) {
        textureArcOverrideName = ptr_textureArcOverrideName->value;
    }

    auto ptr_thicknessOffset = prop->cast_prop<yordle::data::prop::float32_prop>(1447347738u);
    if(ptr_thicknessOffset != nullptr) {
        thicknessOffset = ptr_thicknessOffset->value;
    }
}