/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcc72cb1e
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcc72cb1e : public x75259ad3 {
        explicit xcc72cb1e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3430075166u || x75259ad3::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xc68ec0f = 0u;
        yordle::data::meta::bin_fnv_hash xde649ff0 = 0u;
        yordle::data::meta::bin_fnv_hash x83e52e30 = 0u;
    };
}
#define YORDLE_META_DEF_xcc72cb1e
#endif
