/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GoldSourceFilter
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT GoldSourceFilter : public IStatStoneLogicDriver {
        explicit GoldSourceFilter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 924071072u || IStatStoneLogicDriver::is_type(type);
        }

        uint8_t ValidGoldSource = 0u;
    };
}
#define YORDLE_META_DEF_GoldSourceFilter
#endif
