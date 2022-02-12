/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ScriptGlobalProperties
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ScriptGlobalProperties : public bin_class {
        explicit ScriptGlobalProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3193997900u;
        }

        int32_t OnPreDamagePriority = -1;
        uint32_t DeathEventType = 0u;
        float CastTime = 0.0;
        float ChannelDuration = 0.0;
        std::string buffName {};
        std::string buffTextureName {};
        std::string displayName {};
        std::vector<std::string> AutoBuffActivateEffects {};
        std::vector<std::string> AutoBuffActivateAttachBoneNames {};
        bool PersistsThroughDeath = false;
        bool NonDispellable = false;
        bool IsDeathRecapSource = false;
        bool IsItemToggled = false;
        uint32_t SpellToggleSlot = 4294967295u;
        std::vector<std::string> SpellFXOverrideSkins {};
        std::vector<std::string> SpellVOOverrideSkins {};
        std::vector<std::string> PopupMessages {};
    };
}
#define YORDLE_META_DEF_ScriptGlobalProperties
#endif
