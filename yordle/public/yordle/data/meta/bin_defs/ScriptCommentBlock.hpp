/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ScriptCommentBlock
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ScriptSequence.hpp>
#include <yordle/data/meta/bin_defs/IScriptBlock.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptSequence
    struct ScriptSequence;
#endif
    struct YORDLE_EXPORT ScriptCommentBlock : public IScriptBlock {
        explicit ScriptCommentBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 720031464u || IScriptBlock::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::ScriptSequence> Sequence {};
    };
}
#define YORDLE_META_DEF_ScriptCommentBlock
#endif
