/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_NavHeaderViewController
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT NavHeaderViewController : public ViewController {
        explicit NavHeaderViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2972878046u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash backButton = 0u;
        yordle::data::meta::bin_fnv_hash socialButton = 0u;
        yordle::data::meta::bin_fnv_hash notificationsButton = 0u;
        yordle::data::meta::bin_fnv_hash settingsButton = 0u;
        yordle::data::meta::bin_fnv_hash MissionsButton = 0u;
        yordle::data::meta::bin_fnv_hash StarShardsButton = 0u;
        yordle::data::meta::bin_fnv_hash xdb7747f5 = 0u;
        yordle::data::meta::bin_fnv_hash x4a989cc9 = 0u;
        yordle::data::meta::bin_fnv_hash x4e51b642 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 10> xd1d5634d { 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash x2b33bedc = 0u;
        yordle::data::meta::bin_fnv_hash x93a118fb = 0u;
        yordle::data::meta::bin_fnv_hash x7b8e8695 = 0u;
        yordle::data::meta::bin_fnv_hash x95da10d7 = 0u;
        yordle::data::meta::bin_fnv_hash x61da9b10 = 0u;
        yordle::data::meta::bin_fnv_hash xd5301fde = 0u;
        yordle::data::meta::bin_fnv_hash x53ff8f31 = 0u;
        yordle::data::meta::bin_fnv_hash x9a44ff4e = 0u;
    };
}
#define YORDLE_META_DEF_NavHeaderViewController
#endif