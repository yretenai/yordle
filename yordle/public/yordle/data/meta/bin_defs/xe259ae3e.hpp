/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe259ae3e
#pragma once

#include <memory>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xe259ae3e : public bin_class {
        explicit xe259ae3e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3797528126u;
        }

        uint32_t x4939f3f8 = 0u;
        std::array<uint8_t, 4> textColor { 255, 255, 255, 255 };
        yordle::data::meta::bin_fnv_hash image = 0u;
    };
}
#define YORDLE_META_DEF_xe259ae3e
#endif