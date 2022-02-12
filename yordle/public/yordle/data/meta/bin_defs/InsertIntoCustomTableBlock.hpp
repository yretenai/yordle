/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_InsertIntoCustomTableBlock
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/CustomTableGet.hpp>
#include <yordle/data/meta/bin_defs/IIntGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
#include <yordle/data/meta/bin_defs/IntTableSet.hpp>
#include <yordle/data/meta/bin_defs/IScriptBlock.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CustomTableGet
    struct CustomTableGet;
#endif

#ifndef YORDLE_META_DEF_IIntGet
    struct IIntGet;
#endif

#ifndef YORDLE_META_DEF_IScriptValueGet
    struct IScriptValueGet;
#endif

#ifndef YORDLE_META_DEF_IntTableSet
    struct IntTableSet;
#endif
    struct YORDLE_EXPORT InsertIntoCustomTableBlock : public IScriptBlock {
        explicit InsertIntoCustomTableBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3439760492u || IScriptBlock::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::CustomTableGet> CustomTable {};
        std::shared_ptr<yordle::data::meta::IIntGet> Index {};
        std::shared_ptr<yordle::data::meta::IScriptValueGet> value {};
        std::shared_ptr<yordle::data::meta::IntTableSet> OutIndex {};
    };
}
#define YORDLE_META_DEF_InsertIntoCustomTableBlock
#endif