/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe9fb4d18
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT xe9fb4d18 : public IGameCalculationPart {
        explicit xe9fb4d18(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3925560600u || IGameCalculationPart::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::IGameCalculationPart> x616627c4 {};
        uint8_t x465802ea = 0u;
        uint8_t x27833dcc = 0u;
    };
}
#define YORDLE_META_DEF_xe9fb4d18
#endif