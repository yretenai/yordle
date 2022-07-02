/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/EffectAnimationElementData.hpp>

#include <yordle/data/meta/bin_defs/AtlasData.hpp>
#include <yordle/data/meta/bin_defs/EffectElementData.hpp>
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

yordle::data::meta::EffectAnimationElementData::EffectAnimationElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::EffectElementData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_FramesPerSecond = prop->cast_prop<yordle::data::prop::float32_prop>(4285724010u);
    if(ptr_FramesPerSecond != nullptr) {
        FramesPerSecond = ptr_FramesPerSecond->value;
    }

    auto ptr_TotalNumberOfFrames = prop->cast_prop<yordle::data::prop::float32_prop>(2790357931u);
    if(ptr_TotalNumberOfFrames != nullptr) {
        TotalNumberOfFrames = ptr_TotalNumberOfFrames->value;
    }

    auto ptr_NumberOfFramesPerRowInAtlas = prop->cast_prop<yordle::data::prop::float32_prop>(2652370576u);
    if(ptr_NumberOfFramesPerRowInAtlas != nullptr) {
        NumberOfFramesPerRowInAtlas = ptr_NumberOfFramesPerRowInAtlas->value;
    }

    auto ptr_mFlipX = prop->cast_prop<yordle::data::prop::bool_prop>(4007892433u);
    if(ptr_mFlipX != nullptr) {
        mFlipX = ptr_mFlipX->value;
    }

    auto ptr_mFlipY = prop->cast_prop<yordle::data::prop::bool_prop>(3991114814u);
    if(ptr_mFlipY != nullptr) {
        mFlipY = ptr_mFlipY->value;
    }

    auto ptr_mPerPixelUvsX = prop->cast_prop<yordle::data::prop::bool_prop>(1342547873u);
    if(ptr_mPerPixelUvsX != nullptr) {
        mPerPixelUvsX = ptr_mPerPixelUvsX->value;
    }

    auto ptr_mAtlas = prop->cast_prop<yordle::data::prop::structure_prop>(3915856815u);
    if(ptr_mAtlas != nullptr) {
        mAtlas = yordle::data::meta::deserialize<yordle::data::meta::AtlasData>(ptr_mAtlas, 1906252436u);
    }

    auto ptr_mFinishBehavior = prop->cast_prop<yordle::data::prop::uint8_prop>(3996911377u);
    if(ptr_mFinishBehavior != nullptr) {
        mFinishBehavior = ptr_mFinishBehavior->value;
    }
}
