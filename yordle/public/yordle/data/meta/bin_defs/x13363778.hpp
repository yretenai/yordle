/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x13363778
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xbcdc9113.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x13363778 : public xbcdc9113 {
        explicit x13363778(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 322320248u || xbcdc9113::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xd4080da5 = 0u;
    };
}
#define YORDLE_META_DEF_x13363778
#endif