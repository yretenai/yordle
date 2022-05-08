/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftItemData
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <array>

#include <yordle/data/meta/bin_defs/TftItemData.hpp>
#include <yordle/data/meta/bin_defs/TftItemComposition.hpp>
#include <yordle/data/meta/bin_defs/TftEffectAmount.hpp>
#include <yordle/data/meta/bin_defs/TftTraitData.hpp>
#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TftItemData
    struct TftItemData;
#endif

#ifndef YORDLE_META_DEF_TftItemComposition
    struct TftItemComposition;
#endif

#ifndef YORDLE_META_DEF_TftEffectAmount
    struct TftEffectAmount;
#endif

#ifndef YORDLE_META_DEF_TftTraitData
    struct TftTraitData;
#endif

#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT TftItemData : public bin_class {
        explicit TftItemData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3515269914u;
        }

        int32_t Mid = 0;
        std::string mName {};
        std::string mBuffName {};
        uint8_t xe75b0636 = 0u;
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>> mComposition {};
        std::vector<std::shared_ptr<yordle::data::meta::TftItemComposition>> xa3ac84d8 {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>> xe98b297e {};
        std::vector<std::shared_ptr<yordle::data::meta::TftEffectAmount>> effectAmounts {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TftTraitData>> x6752c795 {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TftTraitData>> x9071fd36 {};
        bool mIsUnique = false;
        std::vector<yordle::data::meta::bin_fnv_hash> ItemTags {};
        std::string mDisplayNameTra {};
        std::string mDescriptionNameTra {};
        std::vector<yordle::data::meta::bin_fnv_hash> xfaf78155 {};
        std::string mIconPath {};
        std::string xd434d358 {};
        std::optional<std::array<uint8_t, 4>> mColor {};
        std::array<float, 2> x91d75dff { 0.20000000298023224f, 1.0f };
        yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData> mVfxSystem { 1171098015 };
        int32_t x6d8fceed = -1;
    };
}
#define YORDLE_META_DEF_TftItemData
#endif
