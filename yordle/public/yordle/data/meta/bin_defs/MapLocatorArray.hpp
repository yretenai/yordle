/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapLocatorArray
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/MapLocator.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MapLocator
    struct MapLocator;
#endif
    struct YORDLE_EXPORT MapLocatorArray : public bin_class {
        explicit MapLocatorArray(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2902067178u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::MapLocator>> Locators {};
    };
}
#define YORDLE_META_DEF_MapLocatorArray
#endif
