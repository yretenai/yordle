/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BoolTableGet
#pragma once

#include <memory>
#include <optional>

#include <yordle/data/meta/bin_defs/ScriptTable.hpp>
#include <yordle/data/meta/bin_defs/IBoolGet.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptTable
    struct ScriptTable;
#endif
    struct YORDLE_EXPORT BoolTableGet : public IBoolGet {
        explicit BoolTableGet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3148945057u || IBoolGet::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::ScriptTable> Table {};
        yordle::data::meta::bin_fnv_hash Var = 0u;
        std::optional<bool> Default {};
    };
}
#define YORDLE_META_DEF_BoolTableGet
#endif
