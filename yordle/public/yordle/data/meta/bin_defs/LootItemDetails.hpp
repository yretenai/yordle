/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LootItemDetails
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT LootItemDetails : public bin_class {
        explicit LootItemDetails(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1665937510u;
        }

        uint32_t mStoreId = 0u;
        uint32_t mRarity = 0u;
        uint32_t mValue = 0u;
    };
}
#define YORDLE_META_DEF_LootItemDetails
#endif