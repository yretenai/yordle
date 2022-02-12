/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_OptionTemplateHotkeysKey
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT OptionTemplateHotkeysKey : public bin_class {
        explicit OptionTemplateHotkeysKey(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3163647920u;
        }

        std::string EventName {};
        std::string EventNameTraKey {};
        yordle::data::meta::bin_fnv_hash position = 0u;
    };
}
#define YORDLE_META_DEF_OptionTemplateHotkeysKey
#endif