/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ByCharLevelBreakpointsCalculationPart
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/Breakpoint.hpp>
#include <yordle/data/meta/bin_defs/IGameCalculationPartByCharLevel.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_Breakpoint
    struct Breakpoint;
#endif
    struct YORDLE_EXPORT ByCharLevelBreakpointsCalculationPart : public IGameCalculationPartByCharLevel {
        explicit ByCharLevelBreakpointsCalculationPart(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1559666382u || IGameCalculationPartByCharLevel::is_type(type);
        }

        float mLevel1Value = 0.0f;
        float x2deb550 = 0.0f;
        std::vector<std::shared_ptr<yordle::data::meta::Breakpoint>> mBreakpoints {};
    };
}
#define YORDLE_META_DEF_ByCharLevelBreakpointsCalculationPart
#endif
