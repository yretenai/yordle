/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AlwaysSpawnCondition
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VFXDefaultSpawnConditionData.hpp>
#include <yordle/data/meta/bin_defs/IVFXSpawnConditions.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VFXDefaultSpawnConditionData
    struct VFXDefaultSpawnConditionData;
#endif
    struct YORDLE_EXPORT AlwaysSpawnCondition : public IVFXSpawnConditions {
        explicit AlwaysSpawnCondition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2968154316u || IVFXSpawnConditions::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VFXDefaultSpawnConditionData> mDefaultVfxData {};
    };
}
#define YORDLE_META_DEF_AlwaysSpawnCondition
#endif