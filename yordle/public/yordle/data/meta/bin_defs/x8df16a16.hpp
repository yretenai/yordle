/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x8df16a16
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x486e38ec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x8df16a16 : public x486e38ec {
        explicit x8df16a16(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2381408790u || x486e38ec::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash xbde64e3e = 0u;
    };
}
#define YORDLE_META_DEF_x8df16a16
#endif