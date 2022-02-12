/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftDropRates
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TftDropRates : public bin_class {
        explicit TftDropRates(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4070851979u;
        }

        std::array<float, 5> mDropRatesByTier { 0.0, 0.0, 0.0, 0.0, 0.0 };
    };
}
#define YORDLE_META_DEF_TftDropRates
#endif