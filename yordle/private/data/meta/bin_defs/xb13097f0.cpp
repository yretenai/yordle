/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/xb13097f0.hpp>

#include <yordle/data/meta/bin_defs/FlexTypeFloat.hpp>
#include <yordle/data/meta/bin_defs/FlexValueVector3.hpp>
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

yordle::data::meta::xb13097f0::xb13097f0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x8625bf52 = prop->cast_prop<yordle::data::prop::float32_prop>(2250620754u);
    if(ptr_x8625bf52 != nullptr) {
        x8625bf52 = ptr_x8625bf52->value;
    }

    auto ptr_scaleEmitOffsetByBoundObjectSize = prop->cast_prop<yordle::data::prop::float32_prop>(3233764894u);
    if(ptr_scaleEmitOffsetByBoundObjectSize != nullptr) {
        scaleEmitOffsetByBoundObjectSize = ptr_scaleEmitOffsetByBoundObjectSize->value;
    }

    auto ptr_scaleEmitOffsetByBoundObjectHeight = prop->cast_prop<yordle::data::prop::float32_prop>(464554200u);
    if(ptr_scaleEmitOffsetByBoundObjectHeight != nullptr) {
        scaleEmitOffsetByBoundObjectHeight = ptr_scaleEmitOffsetByBoundObjectHeight->value;
    }

    auto ptr_scaleEmitOffsetByBoundObjectRadius = prop->cast_prop<yordle::data::prop::float32_prop>(2055028341u);
    if(ptr_scaleEmitOffsetByBoundObjectRadius != nullptr) {
        scaleEmitOffsetByBoundObjectRadius = ptr_scaleEmitOffsetByBoundObjectRadius->value;
    }

    auto ptr_flexScaleEmitOffset = prop->cast_prop<yordle::data::prop::structure_prop>(2007401040u);
    if(ptr_flexScaleEmitOffset != nullptr) {
        flexScaleEmitOffset = yordle::data::meta::deserialize<yordle::data::meta::FlexTypeFloat>(ptr_flexScaleEmitOffset, 796686208u);
    }

    auto ptr_flexBirthTranslation = prop->cast_prop<yordle::data::prop::structure_prop>(2397835542u);
    if(ptr_flexBirthTranslation != nullptr) {
        flexBirthTranslation = yordle::data::meta::deserialize<yordle::data::meta::FlexValueVector3>(ptr_flexBirthTranslation, 1113621825u);
    }
}
