/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudStatStoneMilestoneData
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_HudMenuTransitionData
    struct HudMenuTransitionData;
#endif
    struct YORDLE_EXPORT HudStatStoneMilestoneData : public bin_class {
        explicit HudStatStoneMilestoneData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4122721905u;
        }

        std::string UiSound {};
        std::string xedf950c1 {};
        std::string x4f7fe3a3 {};
        std::string xbb713ae8 {};
        float MilestoneDisplayTime = 3.0;
        float xdd1c30ab = 8.0;
        float MilestoneSelfIntroTime = 1.0;
        float MilestoneOtherIntroTime = 1.0;
        float PersonalBestIntroTime = 1.0;
        float x39fecf93 = 0.0;
        uint32_t xdb4c4cf = 5u;
        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> xa6d1b459 {};
        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> MilestoneTransitionIn {};
        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> MilestoneTransitionOut {};
        bool x4ea59d14 = false;
    };
}
#define YORDLE_META_DEF_HudStatStoneMilestoneData
#endif
