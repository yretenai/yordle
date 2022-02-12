/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapNavigationGridOverlays
#pragma once

#include <memory>
#include <map>
#include <string>

#include <yordle/data/meta/bin_defs/MapNavigationGridOverlay.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MapNavigationGridOverlay
    struct MapNavigationGridOverlay;
#endif
    struct YORDLE_EXPORT MapNavigationGridOverlays : public bin_class {
        explicit MapNavigationGridOverlays(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3880372342u;
        }

        std::map<std::string, yordle::data::meta::bin_ref<yordle::data::meta::MapNavigationGridOverlay>> overlays {};
    };
}
#define YORDLE_META_DEF_MapNavigationGridOverlays
#endif
