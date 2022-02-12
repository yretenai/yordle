/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualConditionSpell
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/IContextualConditionSpell.hpp>
#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IContextualConditionSpell
    struct IContextualConditionSpell;
#endif
    struct YORDLE_EXPORT ContextualConditionSpell : public IContextualCondition {
        explicit ContextualConditionSpell(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2059432175u || IContextualCondition::is_type(type);
        }

        uint32_t mSpellSlot = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::IContextualConditionSpell>> mChildConditions {};
    };
}
#define YORDLE_META_DEF_ContextualConditionSpell
#endif
