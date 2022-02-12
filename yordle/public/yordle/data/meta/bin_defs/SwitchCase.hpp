/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SwitchCase
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IScriptCondition.hpp>
#include <yordle/data/meta/bin_defs/ScriptSequence.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IScriptCondition
    struct IScriptCondition;
#endif

#ifndef YORDLE_META_DEF_ScriptSequence
    struct ScriptSequence;
#endif
    struct YORDLE_EXPORT SwitchCase : public bin_class {
        explicit SwitchCase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3460129365u;
        }

        std::shared_ptr<yordle::data::meta::IScriptCondition> Condition {};
        std::shared_ptr<yordle::data::meta::ScriptSequence> Sequence {};
        bool IsDisabled = false;
    };
}
#define YORDLE_META_DEF_SwitchCase
#endif
