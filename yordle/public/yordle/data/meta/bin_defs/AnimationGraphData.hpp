/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AnimationGraphData
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
#include <yordle/data/meta/bin_defs/MaskData.hpp>
#include <yordle/data/meta/bin_defs/TrackData.hpp>
#include <yordle/data/meta/bin_defs/SyncGroupData.hpp>
#include <yordle/data/meta/bin_defs/BaseBlendData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ClipBaseData
    struct ClipBaseData;
#endif

#ifndef YORDLE_META_DEF_MaskData
    struct MaskData;
#endif

#ifndef YORDLE_META_DEF_TrackData
    struct TrackData;
#endif

#ifndef YORDLE_META_DEF_SyncGroupData
    struct SyncGroupData;
#endif

#ifndef YORDLE_META_DEF_BaseBlendData
    struct BaseBlendData;
#endif
    struct YORDLE_EXPORT AnimationGraphData : public bin_class {
        explicit AnimationGraphData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4126869447u;
        }

        bool mUseCascadeBlend = false;
        float mCascadeBlendValue = -1.0;
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::ClipBaseData>> mClipDataMap {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::MaskData>> mMaskDataMap {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::TrackData>> mTrackDataMap {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::SyncGroupData>> mSyncGroupDataMap {};
        std::map<uint64_t, std::shared_ptr<yordle::data::meta::BaseBlendData>> mBlendDataTable {};
    };
}
#define YORDLE_META_DEF_AnimationGraphData
#endif
