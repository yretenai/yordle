/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BuffData
#pragma once

#include <memory>
#include <vector>
#include <string>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_defs/VfxSpawnConditions.hpp>
#include <yordle/data/meta/bin_defs/TooltipInstanceBuff.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxSpawnConditions
    struct VfxSpawnConditions;
#endif

#ifndef YORDLE_META_DEF_TooltipInstanceBuff
    struct TooltipInstanceBuff;
#endif
    struct YORDLE_EXPORT BuffData : public bin_class {
        explicit BuffData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1177802644u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::VfxSpawnConditions>> mVfxSpawnConditions {};
        std::string mDescription {};
        std::shared_ptr<yordle::data::meta::TooltipInstanceBuff> mTooltipData {};
        bool x62e282aa = true;
        bool mShowDuration = true;
        bool xd019c1 = true;
        std::array<int32_t, 16> mFloatVarsDecimals { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
        uint8_t mBuffAttributeFlag = 0u;
    };
}
#define YORDLE_META_DEF_BuffData
#endif