/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcc3d6ff6
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcc3d6ff6 : public bin_class {
        explicit xcc3d6ff6(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3426578422u;
        }

        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash x4ab21bc = 0u;
        yordle::data::meta::bin_fnv_hash xbde64e3e = 0u;
    };
}
#define YORDLE_META_DEF_xcc3d6ff6
#endif