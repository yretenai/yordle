/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualConditionNumberOfCharactersNearTargetPos
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ContextualConditionNumberOfCharactersNearTargetPos : public IContextualCondition {
        explicit ContextualConditionNumberOfCharactersNearTargetPos(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4259363442u || IContextualCondition::is_type(type);
        }

        uint32_t mNumberOfCharacters = 1u;
        uint8_t mTeamCompareOp = 0u;
        uint8_t mCompareOp = 3u;
    };
}
#define YORDLE_META_DEF_ContextualConditionNumberOfCharactersNearTargetPos
#endif
