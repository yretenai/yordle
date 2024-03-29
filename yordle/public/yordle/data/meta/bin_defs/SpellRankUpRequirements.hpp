/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SpellRankUpRequirements
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/ISpellRankUpRequirement.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ISpellRankUpRequirement
    struct ISpellRankUpRequirement;
#endif
    struct YORDLE_EXPORT SpellRankUpRequirements : public bin_class {
        explicit SpellRankUpRequirements(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3158945758u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::ISpellRankUpRequirement>> mRequirements {};
    };
}
#define YORDLE_META_DEF_SpellRankUpRequirements
#endif
