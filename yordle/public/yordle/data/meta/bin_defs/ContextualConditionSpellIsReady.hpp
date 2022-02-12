/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualConditionSpellIsReady
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IContextualConditionSpell.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ContextualConditionSpellIsReady : public IContextualConditionSpell {
        explicit ContextualConditionSpellIsReady(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3932864058u || IContextualConditionSpell::is_type(type);
        }

        bool mSpellIsReady = false;
    };
}
#define YORDLE_META_DEF_ContextualConditionSpellIsReady
#endif