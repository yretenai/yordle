/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTBattlepassViewController
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x627faf1d.hpp>
#include <yordle/data/meta/bin_defs/x4792d315.hpp>
#include <yordle/data/meta/bin_defs/x5a0304d8.hpp>
#include <yordle/data/meta/bin_defs/x949c4b8a.hpp>
#include <yordle/data/meta/bin_defs/xa9fbac89.hpp>
#include <yordle/data/meta/bin_defs/ViewPaneDefinition.hpp>
#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x627faf1d
    struct x627faf1d;
#endif

#ifndef YORDLE_META_DEF_x4792d315
    struct x4792d315;
#endif

#ifndef YORDLE_META_DEF_x5a0304d8
    struct x5a0304d8;
#endif

#ifndef YORDLE_META_DEF_x949c4b8a
    struct x949c4b8a;
#endif

#ifndef YORDLE_META_DEF_xa9fbac89
    struct xa9fbac89;
#endif

#ifndef YORDLE_META_DEF_ViewPaneDefinition
    struct ViewPaneDefinition;
#endif

#ifndef YORDLE_META_DEF_HudMenuTransitionData
    struct HudMenuTransitionData;
#endif
    struct YORDLE_EXPORT TFTBattlepassViewController : public ViewController {
        explicit TFTBattlepassViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3603985163u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xcfd1aa4a = 0u;
        std::shared_ptr<yordle::data::meta::x627faf1d> x1e8ac677 {};
        yordle::data::meta::bin_fnv_hash upgradePassButton = 0u;
        yordle::data::meta::bin_fnv_hash lootTableButton = 0u;
        std::shared_ptr<yordle::data::meta::x4792d315> x5b4cd7b {};
        yordle::data::meta::bin_fnv_hash xa90621be = 0u;
        yordle::data::meta::bin_fnv_hash xf75e0a5c = 0u;
        yordle::data::meta::bin_fnv_hash x308d1d82 = 0u;
        std::shared_ptr<yordle::data::meta::x5a0304d8> x46b68465 {};
        std::shared_ptr<yordle::data::meta::x949c4b8a> x974ba1a3 {};
        yordle::data::meta::bin_fnv_hash x59434c33 = 0u;
        std::shared_ptr<yordle::data::meta::xa9fbac89> xa9fbac89 {};
        std::shared_ptr<yordle::data::meta::ViewPaneDefinition> ViewPaneDefinition {};
        float xc034af02 = 3.0;
        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> x650b36b5 {};
    };
}
#define YORDLE_META_DEF_TFTBattlepassViewController
#endif
