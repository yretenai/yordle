/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x81862b0f
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x81862b0f : public bin_class {
        explicit x81862b0f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2173053711u;
        }

        uint8_t minAlpha = 0u;
        uint8_t maxAlpha = 255u;
        float maxOffset = 0.05000000074505806f;
        float x1568581f = 0.27000001072883606f;
        float x1cb012da = 0.10000000149011612f;
        float overshoot = 1.0f;
        float inertia = 0.5f;
        float xe5bc4657 = 5.0f;
    };
}
#define YORDLE_META_DEF_x81862b0f
#endif
