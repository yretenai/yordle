/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe8d20b5b
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/HudBannerData.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_HudBannerData
    struct HudBannerData;
#endif
    struct YORDLE_EXPORT xe8d20b5b : public ViewController {
        explicit xe8d20b5b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3906079579u || ViewController::is_type(type);
        }

        std::string xe095d841 {};
        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash xbde64e3e = 0u;
        yordle::data::meta::bin_fnv_hash Backdrop = 0u;
        std::shared_ptr<yordle::data::meta::HudBannerData> x3df4c838 {};
    };
}
#define YORDLE_META_DEF_xe8d20b5b
#endif