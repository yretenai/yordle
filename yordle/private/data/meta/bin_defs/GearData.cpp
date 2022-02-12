/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/GearData.hpp>

#include <yordle/data/meta/bin_defs/SkinMeshDataProperties.hpp>
#include <yordle/data/meta/bin_defs/AnimationGraphData.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_defs/SkinCharacterDataProperties_CharacterIdleEffect.hpp>
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

yordle::data::meta::GearData::GearData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
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

    auto ptr_mEquipAnimation = prop->cast_prop<yordle::data::prop::string_prop>(2475638922u);
    if(ptr_mEquipAnimation != nullptr) {
        mEquipAnimation = ptr_mEquipAnimation->value;
    }

    auto ptr_mSelfOnlyPortraitIcon = prop->cast_prop<yordle::data::prop::string_prop>(1725649758u);
    if(ptr_mSelfOnlyPortraitIcon != nullptr) {
        mSelfOnlyPortraitIcon = ptr_mSelfOnlyPortraitIcon->value;
    }

    auto ptr_mPortraitIcon = prop->cast_prop<yordle::data::prop::string_prop>(135389434u);
    if(ptr_mPortraitIcon != nullptr) {
        mPortraitIcon = ptr_mPortraitIcon->value;
    }

    auto ptr_xb6c044fb = prop->cast_prop<yordle::data::prop::set_prop>(3066053883u);
    if(ptr_xb6c044fb != nullptr) {
        for(const auto &set_xb6c044fb_entry : ptr_xb6c044fb->value) {
            auto ptr_xb6c044fb_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_xb6c044fb_entry);
            if(ptr_xb6c044fb_entry != nullptr) {
                xb6c044fb.emplace_back(ptr_xb6c044fb_entry->value);
            }
        }
    }

    auto ptr_x21b6167e = prop->cast_prop<yordle::data::prop::set_prop>(565581438u);
    if(ptr_x21b6167e != nullptr) {
        for(const auto &set_x21b6167e_entry : ptr_x21b6167e->value) {
            auto ptr_x21b6167e_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x21b6167e_entry);
            if(ptr_x21b6167e_entry != nullptr) {
                x21b6167e.emplace_back(ptr_x21b6167e_entry->value);
            }
        }
    }

    auto ptr_x71202eae = prop->cast_prop<yordle::data::prop::bool_prop>(1897934510u);
    if(ptr_x71202eae != nullptr) {
        x71202eae = ptr_x71202eae->value;
    }

    auto ptr_xe24cc07 = prop->cast_prop<yordle::data::prop::set_prop>(237292551u);
    if(ptr_xe24cc07 != nullptr) {
        for(const auto &set_xe24cc07_entry : ptr_xe24cc07->value) {
            auto ptr_xe24cc07_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe24cc07_entry);
            if(ptr_xe24cc07_entry != nullptr) {
                xe24cc07.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::SkinCharacterDataProperties_CharacterIdleEffect>(ptr_xe24cc07_entry, 856064357u));
            }
        }
    }
}