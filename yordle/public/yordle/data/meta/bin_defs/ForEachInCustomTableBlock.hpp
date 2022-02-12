/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ForEachInCustomTableBlock
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/CustomTableGet.hpp>
#include <yordle/data/meta/bin_defs/ScriptTableSet.hpp>
#include <yordle/data/meta/bin_defs/ScriptSequence.hpp>
#include <yordle/data/meta/bin_defs/IScriptBlock.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CustomTableGet
    struct CustomTableGet;
#endif

#ifndef YORDLE_META_DEF_ScriptTableSet
    struct ScriptTableSet;
#endif

#ifndef YORDLE_META_DEF_ScriptSequence
    struct ScriptSequence;
#endif
    struct YORDLE_EXPORT ForEachInCustomTableBlock : public IScriptBlock {
        explicit ForEachInCustomTableBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 31607380u || IScriptBlock::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::CustomTableGet> CustomTable {};
        bool SortedByKeys = false;
        std::shared_ptr<yordle::data::meta::ScriptTableSet> OutKey {};
        std::shared_ptr<yordle::data::meta::ScriptTableSet> OutValue {};
        std::shared_ptr<yordle::data::meta::ScriptSequence> Sequence {};
    };
}
#define YORDLE_META_DEF_ForEachInCustomTableBlock
#endif