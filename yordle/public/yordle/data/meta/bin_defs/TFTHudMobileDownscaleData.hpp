/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTHudMobileDownscaleData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TFTHudMobileDownscaleData : public bin_class {
        explicit TFTHudMobileDownscaleData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3672021242u;
        }

        float xd4d2ea52 = 1.600000023841858f;
        float mDownscale = 0.699999988079071f;
    };
}
#define YORDLE_META_DEF_TFTHudMobileDownscaleData
#endif
