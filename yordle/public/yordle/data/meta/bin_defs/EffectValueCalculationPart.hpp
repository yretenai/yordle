/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EffectValueCalculationPart
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT EffectValueCalculationPart : public IGameCalculationPart {
        explicit EffectValueCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2344649559u || IGameCalculationPart::is_type(type);
        }

        int32_t mEffectIndex = 0;
    };
}
#define YORDLE_META_DEF_EffectValueCalculationPart
#endif