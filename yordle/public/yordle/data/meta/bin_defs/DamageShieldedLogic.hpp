/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DamageShieldedLogic
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT DamageShieldedLogic : public IStatStoneLogicDriver {
        explicit DamageShieldedLogic(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2857147974u || IStatStoneLogicDriver::is_type(type);
        }

        bool xa1e033be = true;
        bool x7944553a = true;
        bool x2ad527a6 = false;
        bool x621e14db = true;
        bool x60b7c1b6 = true;
        bool xcbc2f8ba = true;
        bool x2efb9d27 = true;
        bool x1701ca0a = false;
    };
}
#define YORDLE_META_DEF_DamageShieldedLogic
#endif
