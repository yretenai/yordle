/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xad6892df
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x811882fd.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xad6892df : public x811882fd {
        explicit xad6892df(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2909311711u || x811882fd::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xf5021546 = 0u;
        yordle::data::meta::bin_fnv_hash x18ee28a6 = 0u;
        yordle::data::meta::bin_fnv_hash x7d7ba600 = 0u;
        yordle::data::meta::bin_fnv_hash xb35faadf = 0u;
        yordle::data::meta::bin_fnv_hash x476d21ab = 0u;
        yordle::data::meta::bin_fnv_hash x2ce97d34 = 0u;
    };
}
#define YORDLE_META_DEF_xad6892df
#endif
