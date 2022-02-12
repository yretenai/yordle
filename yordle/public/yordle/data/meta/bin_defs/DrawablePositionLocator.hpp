/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DrawablePositionLocator
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT DrawablePositionLocator : public bin_class {
        explicit DrawablePositionLocator(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3451066870u;
        }

        uint32_t basePosition = 0u;
        float distanceOffset = 0.0;
        float angleOffsetRadian = 0.0;
        uint32_t orientationType = 0u;
    };
}
#define YORDLE_META_DEF_DrawablePositionLocator
#endif