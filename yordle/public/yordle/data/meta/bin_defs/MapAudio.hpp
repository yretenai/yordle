/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapAudio
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_defs/GenericMapPlaceable.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT MapAudio : public GenericMapPlaceable {
        explicit MapAudio(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2810433493u || GenericMapPlaceable::is_type(type);
        }

        std::string EventName {};
        uint32_t AudioType = 0u;
        float startTime = 0.0f;
        float xdf1b8a47 = 0.0f;
        float x518f49b9 = 0.0f;
    };
}
#define YORDLE_META_DEF_MapAudio
#endif
