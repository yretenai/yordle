/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IGameCalculation
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT IGameCalculation : public bin_class {
        explicit IGameCalculation(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 389493299u;
        }

        std::shared_ptr<yordle::data::meta::IGameCalculationPart> mMultiplier {};
        uint8_t xcbcac618 = 0u;
        uint8_t x37070a8d = 0u;
        uint8_t xe6eebb2f = 0u;
        bool tooltipOnly = false;
    };
}
#define YORDLE_META_DEF_IGameCalculation
#endif
