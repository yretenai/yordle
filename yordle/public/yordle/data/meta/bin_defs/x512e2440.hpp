/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x512e2440
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CatalogEntry
    struct CatalogEntry;
#endif
    struct YORDLE_EXPORT x512e2440 : public bin_class {
        explicit x512e2440(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1361978432u;
        }

        std::string name {};
        std::shared_ptr<yordle::data::meta::CatalogEntry> CatalogEntry {};
        std::string x81f82f1 {};
    };
}
#define YORDLE_META_DEF_x512e2440
#endif
