/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudItemShopData
#pragma once

#include <memory>
#include <vector>
#include <array>
#include <string>

#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/x38691790.hpp>
#include <yordle/data/meta/bin_defs/xd20000f6.hpp>
#include <yordle/data/meta/bin_defs/xd3350101.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ViewPaneDefinition
    struct ViewPaneDefinition;
#endif

#ifndef YORDLE_META_DEF_x38691790
    struct x38691790;
#endif

#ifndef YORDLE_META_DEF_xd20000f6
    struct xd20000f6;
#endif

#ifndef YORDLE_META_DEF_xd3350101
    struct xd3350101;
#endif
    struct YORDLE_EXPORT HudItemShopData : public bin_class {
        explicit HudItemShopData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2696268697u;
        }

        yordle::data::meta::bin_fnv_hash TabButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash CloseButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash PurchaseButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash SellButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash UndoButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash x616b3a84 = 0u;
        yordle::data::meta::bin_fnv_hash x1ee195a0 = 0u;
        yordle::data::meta::bin_fnv_hash xaa05f252 = 0u;
        yordle::data::meta::bin_fnv_hash xdcf2bbe3 = 0u;
        yordle::data::meta::bin_fnv_hash x6d532c7a = 0u;
        yordle::data::meta::bin_fnv_hash x655c70a4 = 0u;
        yordle::data::meta::bin_fnv_hash xf1b77de6 = 0u;
        yordle::data::meta::bin_fnv_hash xd2202861 = 0u;
        yordle::data::meta::bin_fnv_hash x6ff1fabe = 0u;
        yordle::data::meta::bin_fnv_hash xa1f85097 = 0u;
        yordle::data::meta::bin_fnv_hash x77595aa9 = 0u;
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> x71d17542 {};
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> xce14c25 {};
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> xb3e9d346 {};
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> SearchViewPaneDefinition {};
        yordle::data::meta::bin_fnv_hash AllItemsHeaderRegion = 0u;
        yordle::data::meta::bin_fnv_hash AllItemsItemRegion = 0u;
        yordle::data::meta::bin_fnv_hash ItemSetsHeaderRegion = 0u;
        yordle::data::meta::bin_fnv_hash ItemSetsItemRegion = 0u;
        yordle::data::meta::bin_fnv_hash AllItemsHeaderText = 0u;
        yordle::data::meta::bin_fnv_hash xf481f566 = 0u;
        yordle::data::meta::bin_fnv_hash x4823f71d = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::x38691790>> x79a37750 {};
        std::shared_ptr<yordle::data::meta::xd20000f6> BootsPanelDefinition {};
        std::shared_ptr<yordle::data::meta::xd20000f6> ConsumablesPanelDefinition {};
        std::shared_ptr<yordle::data::meta::xd20000f6> InventoryPanelDefinition {};
        std::shared_ptr<yordle::data::meta::xd3350101> x3da42bb9 {};
        std::shared_ptr<yordle::data::meta::xd3350101> x3c4f003d {};
        std::array<yordle::data::meta::bin_fnv_hash, 6> xe00be811 { 0u, 0u, 0u, 0u, 0u, 0u };
        float xf8310aa = 1.0;
        float x7df5b85f = 1.0;
        yordle::data::meta::bin_fnv_hash BuildsIntoIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash BuildTreeIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash QuickBuyIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash InventoryIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash AllItemsIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash ItemSetsIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash SearchIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash x494a4b42 = 0u;
        yordle::data::meta::bin_fnv_hash CommonlyBuiltIconDefinition = 0u;
        yordle::data::meta::bin_fnv_hash x5ab9b659 = 0u;
        yordle::data::meta::bin_fnv_hash xf8e1342c = 0u;
        yordle::data::meta::bin_fnv_hash x69988db6 = 0u;
        float x7ba0c753 = 1.0;
        yordle::data::meta::bin_fnv_hash ItemDetailsScene = 0u;
        yordle::data::meta::bin_fnv_hash xf48cf36f = 0u;
        yordle::data::meta::bin_fnv_hash xaa352f81 = 0u;
        std::string xd6f8b1fa {};
        yordle::data::meta::bin_fnv_hash x8fb4c5d5 = 0u;
        yordle::data::meta::bin_fnv_hash xb68efccf = 0u;
        yordle::data::meta::bin_fnv_hash x185361a8 = 0u;
        yordle::data::meta::bin_fnv_hash x1666aaf3 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 7> x3d8e74c7 { 0u, 0u, 0u, 0u, 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash x5fd8c182 = 0u;
        yordle::data::meta::bin_fnv_hash xf7ffd989 = 0u;
        yordle::data::meta::bin_fnv_hash xd6bdedee = 0u;
        yordle::data::meta::bin_fnv_hash x58378f41 = 0u;
        yordle::data::meta::bin_fnv_hash x353da31a = 0u;
        yordle::data::meta::bin_fnv_hash xba7e1db0 = 0u;
        yordle::data::meta::bin_fnv_hash x9702f071 = 0u;
        yordle::data::meta::bin_fnv_hash xf99b1baa = 0u;
        yordle::data::meta::bin_fnv_hash x2b029783 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 3> x9cfe3142 { 0u, 0u, 0u };
        std::array<yordle::data::meta::bin_fnv_hash, 9> xd71bb59 { 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash xa135cbb0 = 0u;
        yordle::data::meta::bin_fnv_hash x39bc5dc5 = 0u;
        yordle::data::meta::bin_fnv_hash xfe567b1 = 0u;
    };
}
#define YORDLE_META_DEF_HudItemShopData
#endif