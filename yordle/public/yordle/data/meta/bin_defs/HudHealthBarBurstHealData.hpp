/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudHealthBarBurstHealData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT HudHealthBarBurstHealData : public bin_class {
        explicit HudHealthBarBurstHealData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4246198531u;
        }

        float healTimeWindow = 0.10000000149011612;
        float healTriggerPercent = 0.10000000149011612;
        float healFadeDuration = 0.20000000298023224;
    };
}
#define YORDLE_META_DEF_HudHealthBarBurstHealData
#endif
