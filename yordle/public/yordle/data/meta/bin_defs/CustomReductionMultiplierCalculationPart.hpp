/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CustomReductionMultiplierCalculationPart
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT CustomReductionMultiplierCalculationPart : public IGameCalculationPart {
        explicit CustomReductionMultiplierCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2599819896u || IGameCalculationPart::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::IGameCalculationPart> x6e82b179 {};
        float mMaximumReductionPercent = 0.0;
    };
}
#define YORDLE_META_DEF_CustomReductionMultiplierCalculationPart
#endif
