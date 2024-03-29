/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_Map
#pragma once

#include <memory>
#include <string>
#include <vector>
#include <cstdint>

#include <yordle/data/meta/bin_defs/Map.hpp>
#include <yordle/data/meta/bin_defs/MapCharacterList.hpp>
#include <yordle/data/meta/bin_defs/x7e19c23.hpp>
#include <yordle/data/meta/bin_defs/MapSkin.hpp>
#include <yordle/data/meta/bin_defs/MapVisibilityFlagDefinitions.hpp>
#include <yordle/data/meta/bin_defs/MapNavigationGridOverlays.hpp>
#include <yordle/data/meta/bin_defs/WadFileDescriptor.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_Map
    struct Map;
#endif

#ifndef YORDLE_META_DEF_MapCharacterList
    struct MapCharacterList;
#endif

#ifndef YORDLE_META_DEF_x7e19c23
    struct x7e19c23;
#endif

#ifndef YORDLE_META_DEF_MapSkin
    struct MapSkin;
#endif

#ifndef YORDLE_META_DEF_MapVisibilityFlagDefinitions
    struct MapVisibilityFlagDefinitions;
#endif

#ifndef YORDLE_META_DEF_MapNavigationGridOverlays
    struct MapNavigationGridOverlays;
#endif
    struct YORDLE_EXPORT Map : public WadFileDescriptor {
        explicit Map(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3751997361u || WadFileDescriptor::is_type(type);
        }

        std::string mapStringId {};
        yordle::data::meta::bin_ref<yordle::data::meta::Map> BasedOnMap { 3751997361 };
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::MapCharacterList>> characterLists {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::x7e19c23>> x150e8670 {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::MapSkin>> mapSkins {};
        uint8_t x6744e6e3 = 255u;
        std::shared_ptr<yordle::data::meta::MapVisibilityFlagDefinitions> x9e019715 {};
        std::shared_ptr<yordle::data::meta::MapNavigationGridOverlays> NavigationGridOverlays {};
    };
}
#define YORDLE_META_DEF_Map
#endif
