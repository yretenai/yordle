/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xad6892df
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xad6892df : public ViewController {
        explicit xad6892df(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2909311711u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xf5021546 = 0u;
        yordle::data::meta::bin_fnv_hash x18ee28a6 = 0u;
        yordle::data::meta::bin_fnv_hash x31aa7ea = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 10> xd1d5634d { 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_xad6892df
#endif