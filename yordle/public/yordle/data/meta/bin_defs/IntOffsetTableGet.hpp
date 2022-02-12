/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IntOffsetTableGet
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ScriptTable.hpp>
#include <yordle/data/meta/bin_defs/IIntGet.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ScriptTable
    struct ScriptTable;
#endif
    struct YORDLE_EXPORT IntOffsetTableGet : public IIntGet {
        explicit IntOffsetTableGet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1534915661u || IIntGet::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::ScriptTable> Table {};
        yordle::data::meta::bin_fnv_hash Var = 0u;
        int32_t offset = 0;
    };
}
#define YORDLE_META_DEF_IntOffsetTableGet
#endif