/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapPointLightType
#pragma once

#include <memory>
#include <array>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT MapPointLightType : public bin_class {
        explicit MapPointLightType(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 668199599u;
        }

        std::array<float, 4> lightColor { 1, 1, 1, 1 };
        std::array<float, 4> falloffColor { 0, 0, 0, 1 };
        float radius = 500.0;
        bool castStaticShadows = true;
        bool specular = true;
        int32_t Impact = 3;
    };
}
#define YORDLE_META_DEF_MapPointLightType
#endif