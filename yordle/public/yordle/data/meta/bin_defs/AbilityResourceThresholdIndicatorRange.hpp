/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AbilityResourceThresholdIndicatorRange
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT AbilityResourceThresholdIndicatorRange : public bin_class {
        explicit AbilityResourceThresholdIndicatorRange(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2815698218u;
        }

        float rangeStart = 0.0;
        float rangeEnd = 0.0;
    };
}
#define YORDLE_META_DEF_AbilityResourceThresholdIndicatorRange
#endif
