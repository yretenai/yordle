/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualConditionLastBoughtItem
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ContextualConditionLastBoughtItem : public IContextualCondition {
        explicit ContextualConditionLastBoughtItem(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3450583319u || IContextualCondition::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash mItem = 0u;
    };
}
#define YORDLE_META_DEF_ContextualConditionLastBoughtItem
#endif
