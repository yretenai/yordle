/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LootItem
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/LootStatus.hpp>
#include <yordle/data/meta/bin_defs/LootItemDetails.hpp>
#include <yordle/data/meta/bin_defs/LootOutputBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_LootStatus
    struct LootStatus;
#endif

#ifndef YORDLE_META_DEF_LootItemDetails
    struct LootItemDetails;
#endif
    struct YORDLE_EXPORT LootItem : public LootOutputBase {
        explicit LootItem(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1545315440u || LootOutputBase::is_type(type);
        }

        std::string mInternalName {};
        std::string mName {};
        std::string mHoverDescription {};
        std::string mAdminDescription {};
        std::shared_ptr<yordle::data::meta::LootStatus> mStatus {};
        std::shared_ptr<yordle::data::meta::LootItemDetails> mDetails {};
    };
}
#define YORDLE_META_DEF_LootItem
#endif