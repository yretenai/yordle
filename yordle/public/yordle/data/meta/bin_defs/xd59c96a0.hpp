/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd59c96a0
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x486e38ec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd59c96a0 : public x486e38ec {
        explicit xd59c96a0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3583809184u || x486e38ec::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x79524552 = 0u;
        yordle::data::meta::bin_fnv_hash xb8ec6234 = 0u;
    };
}
#define YORDLE_META_DEF_xd59c96a0
#endif