/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AndScriptCondition
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/IScriptCondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IScriptCondition
    struct IScriptCondition;
#endif
    struct YORDLE_EXPORT AndScriptCondition : public IScriptCondition {
        explicit AndScriptCondition(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1796410142u || IScriptCondition::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::IScriptCondition>> Conditions {};
    };
}
#define YORDLE_META_DEF_AndScriptCondition
#endif
