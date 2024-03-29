/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SubmeshVisibilityEventData
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/BaseEventData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT SubmeshVisibilityEventData : public BaseEventData {
        explicit SubmeshVisibilityEventData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3170201200u || BaseEventData::is_type(type);
        }

        std::vector<yordle::data::meta::bin_fnv_hash> mShowSubmeshList {};
        std::vector<yordle::data::meta::bin_fnv_hash> mHideSubmeshList {};
        bool x42ad0910 = false;
    };
}
#define YORDLE_META_DEF_SubmeshVisibilityEventData
#endif
