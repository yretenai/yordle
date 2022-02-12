/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTItemList
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/TftItemData.hpp>
#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_TftItemData
    struct TftItemData;
#endif

#ifndef YORDLE_META_DEF_ResourceResolver
    struct ResourceResolver;
#endif
    struct YORDLE_EXPORT TFTItemList : public bin_class {
        explicit TFTItemList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2541164198u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::TftItemData>> mItems {};
        yordle::data::meta::bin_ref<yordle::data::meta::ResourceResolver> VfxResourceResolver { 4013559603 };
    };
}
#define YORDLE_META_DEF_TFTItemList
#endif