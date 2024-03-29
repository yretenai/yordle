/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AbilityResourceTypeConfig
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/AbilityResourceTypeData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AbilityResourceTypeData
    struct AbilityResourceTypeData;
#endif
    struct YORDLE_EXPORT AbilityResourceTypeConfig : public bin_class {
        explicit AbilityResourceTypeConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 994495723u;
        }

        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Mana {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Energy {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> None {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Shield {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> BattleFury {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> DragonFury {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Rage {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Heat {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> PrimalFury {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Ferocity {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Bloodwell {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Wind {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Ammo {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Moonlight {};
        std::shared_ptr<yordle::data::meta::AbilityResourceTypeData> Other {};
    };
}
#define YORDLE_META_DEF_AbilityResourceTypeConfig
#endif
