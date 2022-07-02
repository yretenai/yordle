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

    auto ptr_x2d527e72 = prop->cast_prop<yordle::data::prop::set_prop>(760381042u);
    if(ptr_x2d527e72 != nullptr) {
        for(const auto &set_x2d527e72_entry : ptr_x2d527e72->value) {
            auto ptr_x2d527e72_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_x2d527e72_entry);
            if(ptr_x2d527e72_entry != nullptr) {
                x2d527e72.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::TFTSetData>(1133007103u, ptr_x2d527e72_entry->value));
            }
        }
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

    auto ptr_xa4a0f014 = prop->cast_prop<yordle::data::prop::fnv_hash_prop>(2762010644u);
    if(ptr_xa4a0f014 != nullptr) {
        xa4a0f014 = ptr_xa4a0f014->value;
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

    auto ptr_x1ea7ca14 = prop->cast_prop<yordle::data::prop::int32_prop>(514312724u);
    if(ptr_x1ea7ca14 != nullptr) {
        x1ea7ca14 = ptr_x1ea7ca14->value;
    }

    auto ptr_x7648a351 = prop->cast_prop<yordle::data::prop::uint32_prop>(1984471889u);
    if(ptr_x7648a351 != nullptr) {
        x7648a351 = ptr_x7648a351->value;
    }

    auto ptr_xdade6712 = prop->cast_prop<yordle::data::prop::int32_prop>(3672008466u);
    if(ptr_xdade6712 != nullptr) {
        xdade6712 = ptr_xdade6712->value;
    }

    auto ptr_xa82b8a32 = prop->cast_prop<yordle::data::prop::float32_prop>(2821425714u);
    if(ptr_xa82b8a32 != nullptr) {
        xa82b8a32 = ptr_xa82b8a32->value;
    }

    auto ptr_x12d9d5d3 = prop->cast_prop<yordle::data::prop::float32_prop>(316265939u);
    if(ptr_x12d9d5d3 != nullptr) {
        x12d9d5d3 = ptr_x12d9d5d3->value;
    }

    auto ptr_xdfbc2ee = prop->cast_prop<yordle::data::prop::float32_prop>(234603246u);
    if(ptr_xdfbc2ee != nullptr) {
        xdfbc2ee = ptr_xdfbc2ee->value;
    }

    auto ptr_x793d00f9 = prop->cast_prop<yordle::data::prop::float32_prop>(2034041081u);
    if(ptr_x793d00f9 != nullptr) {
        x793d00f9 = ptr_x793d00f9->value;
    }

    auto ptr_x218ae92c = prop->cast_prop<yordle::data::prop::float32_prop>(562751788u);
    if(ptr_x218ae92c != nullptr) {
        x218ae92c = ptr_x218ae92c->value;
    }

    auto ptr_xd95e9023 = prop->cast_prop<yordle::data::prop::uint32_prop>(3646853155u);
    if(ptr_xd95e9023 != nullptr) {
        xd95e9023 = ptr_xd95e9023->value;
    }

    auto ptr_x23e59ebe = prop->cast_prop<yordle::data::prop::string_prop>(602250942u);
    if(ptr_x23e59ebe != nullptr) {
        x23e59ebe = ptr_x23e59ebe->value;
    }
}
