/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SetKeyValueInCustomTableBlock
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/CustomTableGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
#include <yordle/data/meta/bin_defs/IScriptBlock.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_CustomTableGet
    struct CustomTableGet;
#endif

#ifndef YORDLE_META_DEF_IScriptValueGet
    struct IScriptValueGet;
#endif
    struct YORDLE_EXPORT SetKeyValueInCustomTableBlock : public IScriptBlock {
        explicit SetKeyValueInCustomTableBlock(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2263334442u || IScriptBlock::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::CustomTableGet> CustomTable {};
        std::shared_ptr<yordle::data::meta::IScriptValueGet> Key {};
        std::shared_ptr<yordle::data::meta::IScriptValueGet> value {};
    };
}
#define YORDLE_META_DEF_SetKeyValueInCustomTableBlock
#endif
