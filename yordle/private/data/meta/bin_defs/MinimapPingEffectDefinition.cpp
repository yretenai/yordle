/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MinimapPingEffectDefinition.hpp>

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

yordle::data::meta::MinimapPingEffectDefinition::MinimapPingEffectDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_alphaStart = prop->cast_prop<yordle::data::prop::uint32_prop>(3560002185u);
    if(ptr_alphaStart != nullptr) {
        alphaStart = ptr_alphaStart->value;
    }

    auto ptr_alphaFadeSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(3907506576u);
    if(ptr_alphaFadeSpeed != nullptr) {
        alphaFadeSpeed = ptr_alphaFadeSpeed->value;
    }

    auto ptr_scaleStart = prop->cast_prop<yordle::data::prop::float32_prop>(2814322371u);
    if(ptr_scaleStart != nullptr) {
        scaleStart = ptr_scaleStart->value;
    }

    auto ptr_scaleSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(2253960972u);
    if(ptr_scaleSpeed != nullptr) {
        scaleSpeed = ptr_scaleSpeed->value;
    }

    auto ptr_startDelay = prop->cast_prop<yordle::data::prop::float32_prop>(2188171614u);
    if(ptr_startDelay != nullptr) {
        startDelay = ptr_startDelay->value;
    }

    auto ptr_life = prop->cast_prop<yordle::data::prop::float32_prop>(3888595679u);
    if(ptr_life != nullptr) {
        life = ptr_life->value;
    }

    auto ptr_onDeathFadeSpeed = prop->cast_prop<yordle::data::prop::float32_prop>(3604665695u);
    if(ptr_onDeathFadeSpeed != nullptr) {
        onDeathFadeSpeed = ptr_onDeathFadeSpeed->value;
    }

    auto ptr_repeatCount = prop->cast_prop<yordle::data::prop::uint32_prop>(2251296609u);
    if(ptr_repeatCount != nullptr) {
        repeatCount = ptr_repeatCount->value;
    }

    auto ptr_blendWithAlpha = prop->cast_prop<yordle::data::prop::bool_prop>(3409444004u);
    if(ptr_blendWithAlpha != nullptr) {
        blendWithAlpha = ptr_blendWithAlpha->value;
    }
}