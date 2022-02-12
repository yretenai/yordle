/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IGameCalculationPartWithBuffCounter
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IGameCalculationPartWithBuffCounter : public IGameCalculationPart {
        explicit IGameCalculationPartWithBuffCounter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1989226833u || IGameCalculationPart::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash mBuffName = 0u;
        std::string mIconKey {};
        std::string mScalingTagKey {};
    };
}
#define YORDLE_META_DEF_IGameCalculationPartWithBuffCounter
#endif
