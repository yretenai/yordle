/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTDamageSkin
#pragma once

#include <memory>
#include <string>
#include <vector>
#include <cstdint>

#include <yordle/data/meta/bin_defs/TftDamageSkinDescriptor.hpp>
#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TftDamageSkinDescriptor
    struct TftDamageSkinDescriptor;
#endif
    struct YORDLE_EXPORT TFTDamageSkin : public BaseLoadoutData {
        explicit TFTDamageSkin(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2265035565u || BaseLoadoutData::is_type(type);
        }

        std::string StandaloneLoadoutsIcon {};
        std::string StandaloneLoadoutsLargeIcon {};
        yordle::data::meta::bin_fnv_hash VfxResourceResolver = 0u;
        std::vector<std::string> AudioBankPaths {};
        std::string mName {};
        uint32_t rarity = 0u;
        std::string DamageBuffName {};
        uint32_t SkinID = 0u;
        uint32_t Level = 0u;
        bool disabled = false;
        float x7ed5b4a7 = 0.0;
        std::vector<std::shared_ptr<yordle::data::meta::TftDamageSkinDescriptor>> x31af5dc6 {};
    };
}
#define YORDLE_META_DEF_TFTDamageSkin
#endif