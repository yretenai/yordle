/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_PerkReplacementList
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/PerkReplacement.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_PerkReplacement
    struct PerkReplacement;
#endif
    struct YORDLE_EXPORT PerkReplacementList : public bin_class {
        explicit PerkReplacementList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2307915623u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::PerkReplacement>> mReplacements {};
    };
}
#define YORDLE_META_DEF_PerkReplacementList
#endif
