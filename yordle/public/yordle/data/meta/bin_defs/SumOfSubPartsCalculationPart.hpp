/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SumOfSubPartsCalculationPart
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT SumOfSubPartsCalculationPart : public IGameCalculationPart {
        explicit SumOfSubPartsCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2225484659u || IGameCalculationPart::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::IGameCalculationPart>> mSubparts {};
    };
}
#define YORDLE_META_DEF_SumOfSubPartsCalculationPart
#endif
