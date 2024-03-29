/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BaseEventData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT BaseEventData : public bin_class {
        explicit BaseEventData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2039250216u;
        }

        bool mIsSelfOnly = false;
        bool mFireIfAnimationEndsEarly = false;
        float mStartFrame = 0.0f;
        float mEndFrame = -1.0f;
        yordle::data::meta::bin_fnv_hash mName = 0u;
    };
}
#define YORDLE_META_DEF_BaseEventData
#endif
