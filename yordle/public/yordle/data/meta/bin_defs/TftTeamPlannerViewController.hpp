/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftTeamPlannerViewController
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/x13a37f3e.hpp>
#include <yordle/data/meta/bin_defs/x60764292.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ViewPaneDefinition
    struct ViewPaneDefinition;
#endif

#ifndef YORDLE_META_DEF_x13a37f3e
    struct x13a37f3e;
#endif

#ifndef YORDLE_META_DEF_x60764292
    struct x60764292;
#endif
    struct YORDLE_EXPORT TftTeamPlannerViewController : public ViewController {
        explicit TftTeamPlannerViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3963535729u || ViewController::is_type(type);
        }

        float x6ee3bd2e = 5.0;
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> ViewPaneDefinition {};
        std::shared_ptr<yordle::data::meta::x13a37f3e> x374d847e {};
        yordle::data::meta::bin_fnv_hash x160a8b77 = 0u;
        std::shared_ptr<yordle::data::meta::x60764292> xad64dc55 {};
        yordle::data::meta::bin_fnv_hash x387116c1 = 0u;
        yordle::data::meta::bin_fnv_hash ChampionButtonTemplate = 0u;
        yordle::data::meta::bin_fnv_hash x88ca9d2d = 0u;
        yordle::data::meta::bin_fnv_hash closeButton = 0u;
        yordle::data::meta::bin_fnv_hash xc6e9fbea = 0u;
        uint8_t ChampionsPerRow = 5u;
        uint8_t TraitsPerRow = 6u;
        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash xf581291f = 0u;
        yordle::data::meta::bin_fnv_hash x807ef97f = 0u;
    };
}
#define YORDLE_META_DEF_TftTeamPlannerViewController
#endif
