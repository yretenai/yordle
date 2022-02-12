/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionItemSliderInt
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/OptionItemSlider.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT OptionItemSliderInt : public OptionItemSlider {
        explicit OptionItemSliderInt(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 641011299u || OptionItemSlider::is_type(type);
        }

        int16_t option = 65535u;
        uint32_t optionScale = 100u;
    };
}
#define YORDLE_META_DEF_OptionItemSliderInt
#endif