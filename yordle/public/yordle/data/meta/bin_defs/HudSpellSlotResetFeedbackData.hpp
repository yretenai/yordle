/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudSpellSlotResetFeedbackData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT HudSpellSlotResetFeedbackData : public bin_class {
        explicit HudSpellSlotResetFeedbackData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1323252584u;
        }

        float spellResetFlashFadeDuration = 0.20000000298023224;
        float spellResetFlashScaleDownDuration = 0.20000000298023224;
        float spellResetScaleMultiplier = 1.2999999523162842;
    };
}
#define YORDLE_META_DEF_HudSpellSlotResetFeedbackData
#endif
