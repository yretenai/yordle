/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapSunProperties.hpp>

#include <yordle/data/meta/bin_defs/MapComponent.hpp>
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

yordle::data::meta::MapSunProperties::MapSunProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapComponent(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_sunColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(1716133700u);
    if(ptr_sunColor != nullptr) {
        sunColor = ptr_sunColor->value;
    }

    auto ptr_x4620fe14 = prop->cast_prop<yordle::data::prop::float32_prop>(1176567316u);
    if(ptr_x4620fe14 != nullptr) {
        x4620fe14 = ptr_x4620fe14->value;
    }

    auto ptr_x196ca4c4 = prop->cast_prop<yordle::data::prop::float32_prop>(426550468u);
    if(ptr_x196ca4c4 != nullptr) {
        x196ca4c4 = ptr_x196ca4c4->value;
    }

    auto ptr_sunDirection = prop->cast_prop<yordle::data::prop::vector_prop>(3784342774u);
    if(ptr_sunDirection != nullptr) {
        sunDirection = ptr_sunDirection->value;
    }

    auto ptr_xa04bd9bf = prop->cast_prop<yordle::data::prop::optional_prop>(2689325503u);
    if(ptr_xa04bd9bf != nullptr) {
        auto ptr_xa04bd9bf_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::vector_prop>(ptr_xa04bd9bf->value);
        if (ptr_xa04bd9bf_opt != nullptr) {
            xa04bd9bf = ptr_xa04bd9bf_opt->value;
        }
    }

    auto ptr_xd8851203 = prop->cast_prop<yordle::data::prop::float32_prop>(3632599555u);
    if(ptr_xd8851203 != nullptr) {
        xd8851203 = ptr_xd8851203->value;
    }

    auto ptr_xba02f116 = prop->cast_prop<yordle::data::prop::float32_prop>(3120754966u);
    if(ptr_xba02f116 != nullptr) {
        xba02f116 = ptr_xba02f116->value;
    }

    auto ptr_skyLightColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(174422349u);
    if(ptr_skyLightColor != nullptr) {
        skyLightColor = ptr_skyLightColor->value;
    }

    auto ptr_horizonColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(4248650671u);
    if(ptr_horizonColor != nullptr) {
        horizonColor = ptr_horizonColor->value;
    }

    auto ptr_groundColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(1480323041u);
    if(ptr_groundColor != nullptr) {
        groundColor = ptr_groundColor->value;
    }

    auto ptr_skyLightScale = prop->cast_prop<yordle::data::prop::float32_prop>(3013280816u);
    if(ptr_skyLightScale != nullptr) {
        skyLightScale = ptr_skyLightScale->value;
    }

    auto ptr_lightMapColorScale = prop->cast_prop<yordle::data::prop::float32_prop>(2557103452u);
    if(ptr_lightMapColorScale != nullptr) {
        lightMapColorScale = ptr_lightMapColorScale->value;
    }

    auto ptr_fogEnabled = prop->cast_prop<yordle::data::prop::bool_prop>(8689476u);
    if(ptr_fogEnabled != nullptr) {
        fogEnabled = ptr_fogEnabled->value;
    }

    auto ptr_fogColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(37429198u);
    if(ptr_fogColor != nullptr) {
        fogColor = ptr_fogColor->value;
    }

    auto ptr_fogAlternateColor = prop->cast_prop<yordle::data::prop::quaternion_prop>(1217852122u);
    if(ptr_fogAlternateColor != nullptr) {
        fogAlternateColor = ptr_fogAlternateColor->value;
    }

    auto ptr_fogStartAndEnd = prop->cast_prop<yordle::data::prop::point_prop>(1923555699u);
    if(ptr_fogStartAndEnd != nullptr) {
        fogStartAndEnd = ptr_fogStartAndEnd->value;
    }

    auto ptr_fogEmissiveRemap = prop->cast_prop<yordle::data::prop::float32_prop>(666752577u);
    if(ptr_fogEmissiveRemap != nullptr) {
        fogEmissiveRemap = ptr_fogEmissiveRemap->value;
    }

    auto ptr_fogLowQualityModeEmissiveRemap = prop->cast_prop<yordle::data::prop::float32_prop>(1058583641u);
    if(ptr_fogLowQualityModeEmissiveRemap != nullptr) {
        fogLowQualityModeEmissiveRemap = ptr_fogLowQualityModeEmissiveRemap->value;
    }

    auto ptr_useBloom = prop->cast_prop<yordle::data::prop::bool_prop>(1188357031u);
    if(ptr_useBloom != nullptr) {
        useBloom = ptr_useBloom->value;
    }

    auto ptr_surfaceAreaToShadowMapScale = prop->cast_prop<yordle::data::prop::float32_prop>(163905068u);
    if(ptr_surfaceAreaToShadowMapScale != nullptr) {
        surfaceAreaToShadowMapScale = ptr_surfaceAreaToShadowMapScale->value;
    }
}
