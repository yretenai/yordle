/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TFTModeData.hpp>

#include <yordle/data/meta/bin_defs/TFTSetData.hpp>
#include <yordle/data/meta/bin_defs/TFTDragData.hpp>
#include <yordle/data/meta/bin_defs/TFTBotLoadoutConfiguration.hpp>
#include <yordle/data/meta/bin_defs/x3604b3e3.hpp>
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

yordle::data::meta::TFTModeData::TFTModeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mDefaultSetData = prop->cast_prop<yordle::data::prop::reference_prop>(749352059u);
    if(ptr_mDefaultSetData != nullptr) {
        mDefaultSetData = yordle::data::meta::bin_ref<yordle::data::meta::TFTSetData>(1133007103u, ptr_mDefaultSetData->value);
    }

    auto ptr_mDragData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3020870234u);
    if(ptr_mDragData != nullptr) {
        mDragData = yordle::data::meta::deserialize<yordle::data::meta::TFTDragData>(ptr_mDragData, 1414729207u);
    }

    auto ptr_mMobileDragData = prop->cast_prop<yordle::data::prop::inline_structure_prop>(3126367348u);
    if(ptr_mMobileDragData != nullptr) {
        mMobileDragData = yordle::data::meta::deserialize<yordle::data::meta::TFTDragData>(ptr_mMobileDragData, 1414729207u);
    }

    auto ptr_x3caeb7b4 = prop->cast_prop<yordle::data::prop::float32_prop>(1018083252u);
    if(ptr_x3caeb7b4 != nullptr) {
        x3caeb7b4 = ptr_x3caeb7b4->value;
    }

    auto ptr_x4a191241 = prop->cast_prop<yordle::data::prop::reference_prop>(1243157057u);
    if(ptr_x4a191241 != nullptr) {
        x4a191241 = yordle::data::meta::bin_ref<yordle::data::meta::TFTBotLoadoutConfiguration>(2097505044u, ptr_x4a191241->value);
    }

    auto ptr_mTftMapSkinDefault = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(753102698u);
    if(ptr_mTftMapSkinDefault != nullptr) {
        mTftMapSkinDefault = ptr_mTftMapSkinDefault->value;
    }

    auto ptr_mTftDamageSkinDefault = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(1092711647u);
    if(ptr_mTftDamageSkinDefault != nullptr) {
        mTftDamageSkinDefault = ptr_mTftDamageSkinDefault->value;
    }

    auto ptr_mDefaultTftCompanion = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(3095986257u);
    if(ptr_mDefaultTftCompanion != nullptr) {
        mDefaultTftCompanion = ptr_mDefaultTftCompanion->value;
    }

    auto ptr_mTutorialTftCompanion = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2781118562u);
    if(ptr_mTutorialTftCompanion != nullptr) {
        mTutorialTftCompanion = ptr_mTutorialTftCompanion->value;
    }

    auto ptr_xb75a7951 = prop->cast_prop<yordle::data::prop::float32_prop>(3076159825u);
    if(ptr_xb75a7951 != nullptr) {
        xb75a7951 = ptr_xb75a7951->value;
    }

    auto ptr_x12aaf1d8 = prop->cast_prop<yordle::data::prop::set_prop>(313192920u);
    if(ptr_x12aaf1d8 != nullptr) {
        for(const auto &set_x12aaf1d8_entry : ptr_x12aaf1d8->value) {
            auto ptr_x12aaf1d8_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_x12aaf1d8_entry);
            if(ptr_x12aaf1d8_entry != nullptr) {
                x12aaf1d8.emplace_back(ptr_x12aaf1d8_entry->value);
            }
        }
    }

    auto ptr_xe13c7aa = prop->cast_prop<yordle::data::prop::set_prop>(236177322u);
    if(ptr_xe13c7aa != nullptr) {
        for(const auto &set_xe13c7aa_entry : ptr_xe13c7aa->value) {
            auto ptr_xe13c7aa_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_xe13c7aa_entry);
            if(ptr_xe13c7aa_entry != nullptr) {
                xe13c7aa.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::x3604b3e3>(ptr_xe13c7aa_entry, 906277859u));
            }
        }
    }
}