/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ConditionBoolClipData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1650a0ab.hpp>
#include <yordle/data/meta/bin_defs/ClipBaseData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x1650a0ab
    struct x1650a0ab;
#endif
    struct YORDLE_EXPORT ConditionBoolClipData : public ClipBaseData {
        explicit ConditionBoolClipData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 358669516u || ClipBaseData::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x1650a0ab> x16860572 {};
        bool mChangeAnimationMidPlay = false;
        bool x94c90e2b = false;
        bool x31db4e6a = false;
        bool x92213dee = false;
        float mChildAnimDelaySwitchTime = 0.0f;
        yordle::data::meta::bin_fnv_hash mTrueConditionClipName = 0u;
        yordle::data::meta::bin_fnv_hash mFalseConditionClipName = 0u;
    };
}
#define YORDLE_META_DEF_ConditionBoolClipData
#endif
