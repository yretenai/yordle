/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftMapSkin
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TftMapSkin : public BaseLoadoutData {
        explicit TftMapSkin(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2731557552u || BaseLoadoutData::is_type(type);
        }

        std::string StandaloneLoadoutsIcon {};
        std::string StandaloneLoadoutsLargeIcon {};
        std::string GroupLink {};
        uint32_t rarity = 0u;
        yordle::data::meta::bin_fnv_hash x3a039f11 = 0u;
        std::vector<yordle::data::meta::bin_fnv_hash> Characters {};
        std::string MapContainer {};
        int16_t xafc467eb = 0u;
        int16_t x6e39b04a = 0u;
    };
}
#define YORDLE_META_DEF_TftMapSkin
#endif
