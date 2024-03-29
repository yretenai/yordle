/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SettingsViewController
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/GeneralSettingsGroup.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_GeneralSettingsGroup
    struct GeneralSettingsGroup;
#endif
    struct YORDLE_EXPORT SettingsViewController : public ViewController {
        explicit SettingsViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 172306941u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash closeButton = 0u;
        std::shared_ptr<yordle::data::meta::GeneralSettingsGroup> GeneralSettings {};
        yordle::data::meta::bin_fnv_hash tabButton = 0u;
        std::string SoundOnActivate {};
        std::string SoundOnDeActivate {};
    };
}
#define YORDLE_META_DEF_SettingsViewController
#endif
