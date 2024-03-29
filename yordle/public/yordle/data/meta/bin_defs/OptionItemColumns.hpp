/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionItemColumns
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/IOptionItem.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IOptionItem
    struct IOptionItem;
#endif
    struct YORDLE_EXPORT OptionItemColumns : public IOptionItem {
        explicit OptionItemColumns(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3265939366u || IOptionItem::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::IOptionItem>> ItemsEither {};
        std::vector<std::shared_ptr<yordle::data::meta::IOptionItem>> itemsLeft {};
        std::vector<std::shared_ptr<yordle::data::meta::IOptionItem>> itemsRight {};
    };
}
#define YORDLE_META_DEF_OptionItemColumns
#endif
