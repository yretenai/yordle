/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcb3ed43e
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x30176f82.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcb3ed43e : public x30176f82 {
        explicit xcb3ed43e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3409892414u || x30176f82::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xe3444d6f = 0u;
    };
}
#define YORDLE_META_DEF_xcb3ed43e
#endif