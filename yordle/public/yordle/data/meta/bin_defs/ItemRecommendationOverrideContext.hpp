/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ItemRecommendationOverrideContext
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ItemRecommendationOverrideContext : public bin_class {
        explicit ItemRecommendationOverrideContext(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3898055584u;
        }

        uint32_t mMapID = 0u;
        yordle::data::meta::bin_fnv_hash x37b75f5c = 0u;
        yordle::data::meta::bin_fnv_hash mPosition = 0u;
    };
}
#define YORDLE_META_DEF_ItemRecommendationOverrideContext
#endif
