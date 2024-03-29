/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcecd5450
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcecd5450 : public bin_class {
        explicit xcecd5450(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3469562960u;
        }

        std::string effectName {};
        std::string x7d009a51 {};
        std::string boneName {};
        uint8_t xf457386e = 4u;
        uint8_t x4b34615a = 4u;
        bool xe6f2ed02 = false;
        float x1a52a449 = 0.0f;
        bool x110cdbcd = false;
        bool x7279d292 = false;
        bool x9a8284cc = false;
        bool xe4d604c7 = false;
        float Scale = 1.0f;
        float x6a7c10f9 = 120.0f;
        bool xd4c0b82 = false;
        bool x992b4e86 = false;
        bool xae1c3a03 = false;
        bool xe3713772 = false;
    };
}
#define YORDLE_META_DEF_xcecd5450
#endif
