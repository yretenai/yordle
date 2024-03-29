/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapSkin
#pragma once

#include <memory>
#include <string>
#include <map>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/xbf11ddc7.hpp>
#include <yordle/data/meta/bin_defs/MinimapBackgroundConfig.hpp>
#include <yordle/data/meta/bin_defs/MapAlternateAssets.hpp>
#include <yordle/data/meta/bin_defs/GameModeConstants.hpp>
#include <yordle/data/meta/bin_defs/MapSkinColorizationPostEffect.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xbf11ddc7
    struct xbf11ddc7;
#endif

#ifndef YORDLE_META_DEF_MinimapBackgroundConfig
    struct MinimapBackgroundConfig;
#endif

#ifndef YORDLE_META_DEF_MapAlternateAssets
    struct MapAlternateAssets;
#endif

#ifndef YORDLE_META_DEF_GameModeConstants
    struct GameModeConstants;
#endif

#ifndef YORDLE_META_DEF_MapSkinColorizationPostEffect
    struct MapSkinColorizationPostEffect;
#endif

#ifndef YORDLE_META_DEF_ResourceResolver
    struct ResourceResolver;
#endif
    struct YORDLE_EXPORT MapSkin : public bin_class {
        explicit MapSkin(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3441028924u;
        }

        std::string name {};
        std::string mMapContainerLink {};
        std::shared_ptr<yordle::data::meta::xbf11ddc7> x6c65a5a3 {};
        std::shared_ptr<yordle::data::meta::MinimapBackgroundConfig> mMinimapBackgroundConfig {};
        std::shared_ptr<yordle::data::meta::MapAlternateAssets> mAlternateAssets {};
        std::string mMapObjectsCFG = "ObjectCFG.cfg";
        std::string mNavigationMesh = "AIPath.aimesh_ngrid";
        yordle::data::meta::bin_ref<yordle::data::meta::GameModeConstants> x14f54bbd { 201829573 };
        std::string mWorldParticlesINI = "Particles.ini";
        std::shared_ptr<yordle::data::meta::MapSkinColorizationPostEffect> mColorizationPostEffect {};
        std::string mGrassTintTexture = "GrassTint.dds";
        std::string xb0e90e8e = "ASSETS/Maps/Skyboxes/Riots_SRU_Skybox_CubeMap.dds";
        std::map<yordle::data::meta::bin_fnv_hash, int32_t> mObjectSkinFallbacks {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::ResourceResolver>> mResourceResolvers {};
    };
}
#define YORDLE_META_DEF_MapSkin
#endif
