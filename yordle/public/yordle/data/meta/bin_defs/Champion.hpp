/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_Champion
#pragma once

#include <memory>
#include <string>
#include <vector>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ChampionItemRecommendations.hpp>
#include <yordle/data/meta/bin_defs/Character.hpp>
#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_defs/WadFileDescriptor.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ChampionItemRecommendations
    struct ChampionItemRecommendations;
#endif

#ifndef YORDLE_META_DEF_Character
    struct Character;
#endif

#ifndef YORDLE_META_DEF_CatalogEntry
    struct CatalogEntry;
#endif
    struct YORDLE_EXPORT Champion : public WadFileDescriptor {
        explicit Champion(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3931724966u || WadFileDescriptor::is_type(type);
        }

        std::string name {};
        std::vector<yordle::data::meta::bin_fnv_hash> statStoneSets {};
        std::shared_ptr<yordle::data::meta::ChampionItemRecommendations> mChampionItemRecommendations {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::Character>> additionalCharacters {};
        int8_t fixedLoadScreenPosition = -1;
        uint32_t xc7d8a053 = 7u;
        std::shared_ptr<yordle::data::meta::CatalogEntry> CatalogEntry {};
    };
}
#define YORDLE_META_DEF_Champion
#endif
