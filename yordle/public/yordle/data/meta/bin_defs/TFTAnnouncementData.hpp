/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTAnnouncementData
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TFTAnnouncementData : public bin_class {
        explicit TFTAnnouncementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3519409590u;
        }

        yordle::data::meta::bin_fnv_hash x8b7d190d = 0u;
        std::string mIconPath {};
        std::string mTitleTra {};
        float mDelay = 0.0;
        float mDuration = 0.0;
    };
}
#define YORDLE_META_DEF_TFTAnnouncementData
#endif
