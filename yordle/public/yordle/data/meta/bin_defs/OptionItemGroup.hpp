/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionItemGroup
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/IOptionItem.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IOptionItem
    struct IOptionItem;
#endif
    struct YORDLE_EXPORT OptionItemGroup : public IOptionItem {
        explicit OptionItemGroup(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3617299650u || IOptionItem::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x694aaa0b = 0u;
        std::string LabelTraKey {};
        bool ExpandedByDefault = false;
        std::vector<std::shared_ptr<yordle::data::meta::IOptionItem>> items {};
    };
}
#define YORDLE_META_DEF_OptionItemGroup
#endif
