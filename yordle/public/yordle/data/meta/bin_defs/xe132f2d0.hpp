/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe132f2d0
#pragma once

#include <memory>
#include <optional>
#include <cstdint>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/TftEffectAmount.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TftEffectAmount
    struct TftEffectAmount;
#endif
    struct YORDLE_EXPORT xe132f2d0 : public bin_class {
        explicit xe132f2d0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3778212560u;
        }

        std::optional<uint32_t> x1d5932cf {};
        uint8_t x26e50f8c = 0u;
        uint8_t targetStrategy = 0u;
        std::string buffName {};
        std::string activatedBuffName {};
        std::vector<std::shared_ptr<yordle::data::meta::TftEffectAmount>> effectAmounts {};
    };
}
#define YORDLE_META_DEF_xe132f2d0
#endif
