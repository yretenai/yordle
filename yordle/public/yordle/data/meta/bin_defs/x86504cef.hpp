/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x86504cef
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x86504cef : public bin_class {
        explicit x86504cef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2253409519u;
        }

        yordle::data::meta::bin_fnv_hash Group = 0u;
        yordle::data::meta::bin_fnv_hash Portrait = 0u;
        yordle::data::meta::bin_fnv_hash VolumeText = 0u;
        yordle::data::meta::bin_fnv_hash Halo = 0u;
        yordle::data::meta::bin_fnv_hash NameText = 0u;
        yordle::data::meta::bin_fnv_hash VolumeSliderBar = 0u;
        yordle::data::meta::bin_fnv_hash MuteButton = 0u;
    };
}
#define YORDLE_META_DEF_x86504cef
#endif
