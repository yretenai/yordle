/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/QualitySetting.hpp>

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

yordle::data::meta::QualitySetting::QualitySetting(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mName = prop->cast_prop<yordle::data::prop::string_prop>(435142619u);
    if(ptr_mName != nullptr) {
        mName = ptr_mName->value;
    }

    auto ptr_x33eb38d = prop->cast_prop<yordle::data::prop::float32_prop>(54440845u);
    if(ptr_x33eb38d != nullptr) {
        x33eb38d = ptr_x33eb38d->value;
    }

    auto ptr_mFrameCap = prop->cast_prop<yordle::data::prop::uint32_prop>(502492027u);
    if(ptr_mFrameCap != nullptr) {
        mFrameCap = ptr_mFrameCap->value;
    }

    auto ptr_mEnvironmentQuality = prop->cast_prop<yordle::data::prop::uint32_prop>(2980703562u);
    if(ptr_mEnvironmentQuality != nullptr) {
        mEnvironmentQuality = ptr_mEnvironmentQuality->value;
    }

    auto ptr_xa8d99737 = prop->cast_prop<yordle::data::prop::uint32_prop>(2832832311u);
    if(ptr_xa8d99737 != nullptr) {
        xa8d99737 = ptr_xa8d99737->value;
    }

    auto ptr_mEffectsQuality = prop->cast_prop<yordle::data::prop::uint32_prop>(2879143307u);
    if(ptr_mEffectsQuality != nullptr) {
        mEffectsQuality = ptr_mEffectsQuality->value;
    }

    auto ptr_mShadowQuality = prop->cast_prop<yordle::data::prop::uint32_prop>(2814229565u);
    if(ptr_mShadowQuality != nullptr) {
        mShadowQuality = ptr_mShadowQuality->value;
    }

    auto ptr_mFxAa = prop->cast_prop<yordle::data::prop::bool_prop>(484066796u);
    if(ptr_mFxAa != nullptr) {
        mFxAa = ptr_mFxAa->value;
    }
}
