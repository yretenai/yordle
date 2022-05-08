/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ItemShopViewController
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ItemShopViewController : public ViewController {
        explicit ItemShopViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3842081615u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash DragRegion = 0u;
        yordle::data::meta::bin_fnv_hash ResizeDragRegion = 0u;
        yordle::data::meta::bin_fnv_hash xcc5d06d5 = 0u;
        float MaximumShopScale = 1.5f;
        float MinimumShopScale = 0.75f;
    };
}
#define YORDLE_META_DEF_ItemShopViewController
#endif
