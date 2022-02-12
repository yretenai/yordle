/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapVisibilityFlagDefinition
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT MapVisibilityFlagDefinition : public bin_class {
        explicit MapVisibilityFlagDefinition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 730516414u;
        }

        yordle::data::meta::bin_fnv_hash name = 0u;
        std::string PublicName {};
        uint8_t BitIndex = 0u;
        float transitionTime = 3.0;
    };
}
#define YORDLE_META_DEF_MapVisibilityFlagDefinition
#endif