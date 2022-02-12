/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxAssetRemap
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VfxAssetRemap : public bin_class {
        explicit VfxAssetRemap(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4129808802u;
        }

        uint32_t type = 0u;
        yordle::data::meta::bin_fnv_hash oldAsset = 0u;
        std::string newAsset {};
    };
}
#define YORDLE_META_DEF_VfxAssetRemap
#endif