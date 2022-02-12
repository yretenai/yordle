/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SubPartScaledProportionalToStat
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT SubPartScaledProportionalToStat : public IGameCalculationPart {
        explicit SubPartScaledProportionalToStat(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2572940566u || IGameCalculationPart::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::IGameCalculationPart> mSubpart {};
        float mRatio = 0.0;
        uint8_t mStat = 0u;
        uint8_t mStatFormula = 0u;
        std::string mStyleTag {};
        std::string xa5749b52 {};
    };
}
#define YORDLE_META_DEF_SubPartScaledProportionalToStat
#endif
