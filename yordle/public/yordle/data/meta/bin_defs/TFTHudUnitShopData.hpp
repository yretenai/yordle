/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTHudUnitShopData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TFTHudUnitShopData : public bin_class {
        explicit TFTHudUnitShopData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 924097896u;
        }

        float x88606883 = 1.5;
        float xc38c6ba9 = 3.0;
    };
}
#define YORDLE_META_DEF_TFTHudUnitShopData
#endif