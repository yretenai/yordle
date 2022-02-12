/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionItemSliderFloat
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/OptionItemSlider.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT OptionItemSliderFloat : public OptionItemSlider {
        explicit OptionItemSliderFloat(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2846603080u || OptionItemSlider::is_type(type);
        }

        int16_t option = 65535u;
        bool UpdateOnDrag = true;
        float Scale = 1.0;
    };
}
#define YORDLE_META_DEF_OptionItemSliderFloat
#endif