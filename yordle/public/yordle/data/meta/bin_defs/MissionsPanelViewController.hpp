/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MissionsPanelViewController
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/x16eb9b94.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ViewPaneDefinition
    struct ViewPaneDefinition;
#endif

#ifndef YORDLE_META_DEF_x16eb9b94
    struct x16eb9b94;
#endif
    struct YORDLE_EXPORT MissionsPanelViewController : public ViewController {
        explicit MissionsPanelViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 162987137u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> ViewPaneDefinition {};
        float xfa7c8443 = 0.5f;
        uint8_t xec740d9e = 19u;
        std::shared_ptr<yordle::data::meta::x16eb9b94> xba21570a {};
        yordle::data::meta::bin_fnv_hash x5f2f76f3 = 0u;
        yordle::data::meta::bin_fnv_hash xb3e383e1 = 0u;
    };
}
#define YORDLE_META_DEF_MissionsPanelViewController
#endif
