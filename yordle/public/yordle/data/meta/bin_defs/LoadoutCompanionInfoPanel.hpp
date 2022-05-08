/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LoadoutCompanionInfoPanel
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/ILoadoutInfoPanel.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT LoadoutCompanionInfoPanel : public ILoadoutInfoPanel {
        explicit LoadoutCompanionInfoPanel(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 172106287u || ILoadoutInfoPanel::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash upgradeInfoText = 0u;
        yordle::data::meta::bin_fnv_hash upgradeErrorText = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 3> tierButton { 0u, 0u, 0u };
        std::array<yordle::data::meta::bin_fnv_hash, 3> x7a6c84ab { 0u, 0u, 0u };
        std::array<yordle::data::meta::bin_fnv_hash, 3> upgradeTierButton { 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash x6a5635f2 = 0u;
        yordle::data::meta::bin_fnv_hash x90dd73ef = 0u;
    };
}
#define YORDLE_META_DEF_LoadoutCompanionInfoPanel
#endif
