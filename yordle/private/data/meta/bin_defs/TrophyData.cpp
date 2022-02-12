/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TrophyData.hpp>

#include <yordle/data/meta/bin_defs/SkinMeshDataProperties.hpp>
#include <yordle/data/meta/bin_defs/AnimationGraphData.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
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

yordle::data::meta::TrophyData::TrophyData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseLoadoutData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mPerceptionBubbleRadius = prop->cast_prop<yordle::data::prop::float32_prop>(20532479u);
    if(ptr_mPerceptionBubbleRadius != nullptr) {
        mPerceptionBubbleRadius = ptr_mPerceptionBubbleRadius->value;
    }

    auto ptr_skinMeshProperties = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1174362372u);
    if(ptr_skinMeshProperties != nullptr) {
        skinMeshProperties = yordle::data::meta::deserialize<yordle::data::meta::SkinMeshDataProperties>(ptr_skinMeshProperties, 1628559524u);
    }

    auto ptr_AnimationGraphData = prop->cast_prop<yordle::data::prop::reference_prop>(4126869447u);
    if(ptr_AnimationGraphData != nullptr) {
        AnimationGraphData = yordle::data::meta::bin_ref<yordle::data::meta::AnimationGraphData>(4126869447u, ptr_AnimationGraphData->value);
    }

    auto ptr_mVFXResourceResolver = prop->cast_prop<yordle::data::prop::structure_prop>(1602389154u);
    if(ptr_mVFXResourceResolver != nullptr) {
        mVFXResourceResolver = yordle::data::meta::deserialize<yordle::data::meta::ResourceResolver>(ptr_mVFXResourceResolver, 4013559603u);
    }

    auto ptr_mBracketTRAKey = prop->cast_prop<yordle::data::prop::string_prop>(1360340284u);
    if(ptr_mBracketTRAKey != nullptr) {
        mBracketTRAKey = ptr_mBracketTRAKey->value;
    }
}
