/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionTemplateHotkeys
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/OptionTemplateHotkeysLabel.hpp>
#include <yordle/data/meta/bin_defs/OptionTemplateHotkeysKey.hpp>
#include <yordle/data/meta/bin_defs/IOptionTemplate.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_OptionTemplateHotkeysLabel
    struct OptionTemplateHotkeysLabel;
#endif

#ifndef YORDLE_META_DEF_OptionTemplateHotkeysKey
    struct OptionTemplateHotkeysKey;
#endif
    struct YORDLE_EXPORT OptionTemplateHotkeys : public IOptionTemplate {
        explicit OptionTemplateHotkeys(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 704287001u || IOptionTemplate::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash HotkeyButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash HotkeyButtonTextSmall = 0u;
        yordle::data::meta::bin_fnv_hash hotkeyModifierText = 0u;
        yordle::data::meta::bin_fnv_hash HotkeyQuickCastButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash CastAllButtonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash x2f11f1cb = 0u;
        yordle::data::meta::bin_fnv_hash xa8e4f979 = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::OptionTemplateHotkeysLabel>> Labels {};
        std::vector<std::shared_ptr<yordle::data::meta::OptionTemplateHotkeysKey>> keys {};
    };
}
#define YORDLE_META_DEF_OptionTemplateHotkeys
#endif