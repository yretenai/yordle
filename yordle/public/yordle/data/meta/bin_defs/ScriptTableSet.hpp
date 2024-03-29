/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ScriptTableSet
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ScriptTable.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptTable
    struct ScriptTable;
#endif
    struct YORDLE_EXPORT ScriptTableSet : public bin_class {
        explicit ScriptTableSet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4139131590u;
        }

        std::shared_ptr<yordle::data::meta::ScriptTable> Table {};
        yordle::data::meta::bin_fnv_hash Var = 0u;
    };
}
#define YORDLE_META_DEF_ScriptTableSet
#endif
