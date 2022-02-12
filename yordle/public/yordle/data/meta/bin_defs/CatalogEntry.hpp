/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CatalogEntry
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CatalogEntry : public bin_class {
        explicit CatalogEntry(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 607049692u;
        }

        std::string contentId {};
        uint32_t itemID = 0u;
        std::string offerId {};
    };
}
#define YORDLE_META_DEF_CatalogEntry
#endif
