/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_Perk
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/SummonerSpellPerkReplacementList.hpp>
#include <yordle/data/meta/bin_defs/BasePerk.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SummonerSpellPerkReplacementList
    struct SummonerSpellPerkReplacementList;
#endif
    struct YORDLE_EXPORT Perk : public BasePerk {
        explicit Perk(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3069197533u || BasePerk::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::SummonerSpellPerkReplacementList> mSummonerPerkReplacements {};
        std::string mMajorChangePatchVersion {};
        bool mDefault = false;
    };
}
#define YORDLE_META_DEF_Perk
#endif
