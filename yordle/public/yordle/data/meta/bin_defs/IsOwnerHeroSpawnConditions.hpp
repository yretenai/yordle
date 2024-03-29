/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IsOwnerHeroSpawnConditions
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/VFXDefaultSpawnConditionData.hpp>
#include <yordle/data/meta/bin_defs/IsOwnerHeroConditionData.hpp>
#include <yordle/data/meta/bin_defs/IVFXSpawnConditions.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VFXDefaultSpawnConditionData
    struct VFXDefaultSpawnConditionData;
#endif

#ifndef YORDLE_META_DEF_IsOwnerHeroConditionData
    struct IsOwnerHeroConditionData;
#endif
    struct YORDLE_EXPORT IsOwnerHeroSpawnConditions : public IVFXSpawnConditions {
        explicit IsOwnerHeroSpawnConditions(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1556398653u || IVFXSpawnConditions::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VFXDefaultSpawnConditionData> mDefaultVfxData {};
        std::vector<std::shared_ptr<yordle::data::meta::IsOwnerHeroConditionData>> mConditions {};
    };
}
#define YORDLE_META_DEF_IsOwnerHeroSpawnConditions
#endif
