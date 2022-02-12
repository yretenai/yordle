/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TargetTeamFilter
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TargetTeamFilter : public IStatStoneLogicDriver {
        explicit TargetTeamFilter(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3663270019u || IStatStoneLogicDriver::is_type(type);
        }

        bool ally = false;
        bool enemy = false;
        bool Self = false;
    };
}
#define YORDLE_META_DEF_TargetTeamFilter
#endif
