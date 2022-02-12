/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CrowdControlFilter
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CrowdControlFilter : public IStatStoneLogicDriver {
        explicit CrowdControlFilter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2898073997u || IStatStoneLogicDriver::is_type(type);
        }

        std::vector<uint8_t> x20cf84ac {};
        bool TrackDuration = true;
    };
}
#define YORDLE_META_DEF_CrowdControlFilter
#endif
