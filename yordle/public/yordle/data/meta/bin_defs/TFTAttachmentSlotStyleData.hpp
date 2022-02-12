/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTAttachmentSlotStyleData
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TFTAttachmentSlotStyleData : public bin_class {
        explicit TFTAttachmentSlotStyleData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3726789741u;
        }

        std::string mName {};
        std::string mOverlayIconPath {};
        std::string mSubtextTra {};
    };
}
#define YORDLE_META_DEF_TFTAttachmentSlotStyleData
#endif