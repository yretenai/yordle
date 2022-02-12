/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTModeData
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/TFTSetData.hpp>
#include <yordle/data/meta/bin_defs/TFTDragData.hpp>
#include <yordle/data/meta/bin_defs/TFTBotLoadoutConfiguration.hpp>
#include <yordle/data/meta/bin_defs/x3604b3e3.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TFTSetData
    struct TFTSetData;
#endif

#ifndef YORDLE_META_DEF_TFTDragData
    struct TFTDragData;
#endif

#ifndef YORDLE_META_DEF_TFTBotLoadoutConfiguration
    struct TFTBotLoadoutConfiguration;
#endif

#ifndef YORDLE_META_DEF_x3604b3e3
    struct x3604b3e3;
#endif
    struct YORDLE_EXPORT TFTModeData : public bin_class {
        explicit TFTModeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 30889102u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::TFTSetData> mDefaultSetData { 1133007103 };
        std::shared_ptr<yordle::data::meta::TFTDragData> mDragData {};
        std::shared_ptr<yordle::data::meta::TFTDragData> mMobileDragData {};
        float x3caeb7b4 = 3.0;
        yordle::data::meta::bin_ref<yordle::data::meta::TFTBotLoadoutConfiguration> x4a191241 { 2097505044 };
        yordle::data::meta::bin_fnv_hash mTftMapSkinDefault = 0u;
        yordle::data::meta::bin_fnv_hash mTftDamageSkinDefault = 0u;
        yordle::data::meta::bin_fnv_hash mDefaultTftCompanion = 0u;
        yordle::data::meta::bin_fnv_hash mTutorialTftCompanion = 0u;
        float xb75a7951 = 1.149999976158142;
        std::vector<yordle::data::meta::bin_fnv_hash> x12aaf1d8 {};
        std::vector<std::shared_ptr<yordle::data::meta::x3604b3e3>> xe13c7aa {};
    };
}
#define YORDLE_META_DEF_TFTModeData
#endif