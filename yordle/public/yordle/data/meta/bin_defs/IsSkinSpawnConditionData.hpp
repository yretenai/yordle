/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IsSkinSpawnConditionData
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/VFXSpawnConditionData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IsSkinSpawnConditionData : public VFXSpawnConditionData {
        explicit IsSkinSpawnConditionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1323437592u || VFXSpawnConditionData::is_type(type);
        }

        uint32_t mSkinId = 0u;
    };
}
#define YORDLE_META_DEF_IsSkinSpawnConditionData
#endif
