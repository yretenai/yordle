/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GlobalAudioDataProperties
#pragma once

#include <memory>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/AudioSystemDataProperties.hpp>
#include <yordle/data/meta/bin_defs/AudioStatusEvents.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AudioSystemDataProperties
    struct AudioSystemDataProperties;
#endif

#ifndef YORDLE_META_DEF_AudioStatusEvents
    struct AudioStatusEvents;
#endif
    struct YORDLE_EXPORT GlobalAudioDataProperties : public bin_class {
        explicit GlobalAudioDataProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2263089413u;
        }

        std::map<yordle::data::meta::bin_fnv_hash, yordle::data::meta::bin_ref<yordle::data::meta::AudioSystemDataProperties>> systems {};
        float cooldownVoiceOver = 12.0f;
        std::map<uint8_t, std::shared_ptr<yordle::data::meta::AudioStatusEvents>> localPlayerStatusEvents {};
        uint32_t x103e4044 = 1000u;
    };
}
#define YORDLE_META_DEF_GlobalAudioDataProperties
#endif
