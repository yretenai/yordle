/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FloatTextIconData
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT FloatTextIconData : public bin_class {
        explicit FloatTextIconData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 383291203u;
        }

        std::string mIconFileName {};
        std::array<uint8_t, 4> mColor { 255, 255, 255, 255 };
        std::array<float, 2> mDisplaySize { 0, 0 };
        std::array<float, 2> mOffset { 0, 0 };
        uint32_t mAlignment = 0u;
    };
}
#define YORDLE_META_DEF_FloatTextIconData
#endif