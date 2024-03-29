/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxSpawnConditions
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/VFXDefaultSpawnConditionData.hpp>
#include <yordle/data/meta/bin_defs/VFXSpawnConditionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VFXDefaultSpawnConditionData
    struct VFXDefaultSpawnConditionData;
#endif

#ifndef YORDLE_META_DEF_VFXSpawnConditionData
    struct VFXSpawnConditionData;
#endif
    struct YORDLE_EXPORT VfxSpawnConditions : public bin_class {
        explicit VfxSpawnConditions(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2833994484u;
        }

        std::shared_ptr<yordle::data::meta::VFXDefaultSpawnConditionData> mDefaultVfxData {};
        std::vector<std::shared_ptr<yordle::data::meta::VFXSpawnConditionData>> mConditionalVfxData {};
    };
}
#define YORDLE_META_DEF_VfxSpawnConditions
#endif
