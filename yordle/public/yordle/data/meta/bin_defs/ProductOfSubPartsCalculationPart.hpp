/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ProductOfSubPartsCalculationPart
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
    struct YORDLE_EXPORT ProductOfSubPartsCalculationPart : public IGameCalculationPart {
        explicit ProductOfSubPartsCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2903535207u || IGameCalculationPart::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::IGameCalculationPart> mPart1 {};
        std::shared_ptr<yordle::data::meta::IGameCalculationPart> mPart2 {};
    };
}
#define YORDLE_META_DEF_ProductOfSubPartsCalculationPart
#endif
