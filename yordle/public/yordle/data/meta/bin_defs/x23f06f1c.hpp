/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x23f06f1c
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x23f06f1c : public bin_class {
        explicit x23f06f1c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 602959644u;
        }

        uint32_t xf7f4881e = 0u;
        uint32_t xcf4a92d = 0u;
        uint32_t x7f4a14e = 0u;
        float xa40f930a = 0.0f;
        float x18e4be8d = 0.0f;
        uint8_t Team = 4u;
        bool x61cc66ee = true;
    };
}
#define YORDLE_META_DEF_x23f06f1c
#endif
