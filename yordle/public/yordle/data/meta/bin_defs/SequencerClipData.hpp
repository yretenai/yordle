/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SequencerClipData
#pragma once

#include <memory>
#include <vector>
#include <map>

#include <yordle/data/meta/bin_defs/BaseEventData.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_BaseEventData
    struct BaseEventData;
#endif
    struct YORDLE_EXPORT SequencerClipData : public ClipBaseData {
        explicit SequencerClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2368776128u || ClipBaseData::is_type(type);
        }

        std::vector<yordle::data::meta::bin_fnv_hash> mClipNameList {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::BaseEventData>> mEventDataMap {};
    };
}
#define YORDLE_META_DEF_SequencerClipData
#endif
