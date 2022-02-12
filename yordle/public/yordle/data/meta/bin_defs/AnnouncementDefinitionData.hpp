/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AnnouncementDefinitionData
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_defs/AnnouncementStyleBasic.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AnnouncementStyleBasic
    struct AnnouncementStyleBasic;
#endif
    struct YORDLE_EXPORT AnnouncementDefinitionData : public bin_class {
        explicit AnnouncementDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 502828211u;
        }

        int16_t priority = 0u;
        bool CanBeMadeObsolete = true;
        bool MakeLowerPriorityEventsObsolete = true;
        yordle::data::meta::bin_ref<yordle::data::meta::AnnouncementStyleBasic> Style { 3731372071 };
        std::string TextKey {};
        std::string ChatMessageKey {};
        std::string SoundKey {};
        std::string SpectatorSoundKey {};
        yordle::data::meta::bin_fnv_hash CommonElements = 0u;
        yordle::data::meta::bin_fnv_hash AlliedElements = 0u;
        yordle::data::meta::bin_fnv_hash EnemyElements = 0u;
    };
}
#define YORDLE_META_DEF_AnnouncementDefinitionData
#endif