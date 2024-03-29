/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BaseLoadoutData
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_defs/ICatalogEntryOwner.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CatalogEntry
    struct CatalogEntry;
#endif
    struct YORDLE_EXPORT BaseLoadoutData : public ICatalogEntryOwner {
        explicit BaseLoadoutData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2514536512u || ICatalogEntryOwner::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::CatalogEntry> CatalogEntry {};
        std::string mNameTraKey {};
        std::string mDescriptionTraKey {};
    };
}
#define YORDLE_META_DEF_BaseLoadoutData
#endif
