/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_NeutralTimerData
#pragma once

#include <memory>
#include <string>
#include <map>

#include <yordle/data/meta/bin_defs/NeutralTimerSourceIconData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_NeutralTimerSourceIconData
    struct NeutralTimerSourceIconData;
#endif
    struct YORDLE_EXPORT NeutralTimerData : public bin_class {
        explicit NeutralTimerData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 964506025u;
        }

        std::string mTimerKeyName {};
        std::string mTooltip {};
        std::string mTooltipCampName {};
        std::string mTooltipRespawn {};
        std::string mTooltipChatNameOrder {};
        std::string mTooltipChatNameChaos {};
        std::map<yordle::data::meta::bin_fnv_hash, std::shared_ptr<yordle::data::meta::NeutralTimerSourceIconData>> mSourceIcons {};
    };
}
#define YORDLE_META_DEF_NeutralTimerData
#endif