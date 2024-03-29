/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_StatStoneSet
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_defs/StatStoneData.hpp>
#include <yordle/data/meta/bin_defs/ICatalogEntryOwner.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CatalogEntry
    struct CatalogEntry;
#endif

#ifndef YORDLE_META_DEF_StatStoneData
    struct StatStoneData;
#endif
    struct YORDLE_EXPORT StatStoneSet : public ICatalogEntryOwner {
        explicit StatStoneSet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2524344308u || ICatalogEntryOwner::is_type(type);
        }

        std::string name {};
        std::shared_ptr<yordle::data::meta::CatalogEntry> CatalogEntry {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::StatStoneData>> statStones {};
    };
}
#define YORDLE_META_DEF_StatStoneSet
#endif
