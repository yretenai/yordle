/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CSSIcon
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CSSIcon : public bin_class {
        explicit CSSIcon(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3991255873u;
        }

        std::array<float, 2> xy { 0.0f, 0.0f };
        std::array<float, 2> wh { 20.0f, 20.0f };
        float x81e208ef = 0.0f;
    };
}
#define YORDLE_META_DEF_CSSIcon
#endif
