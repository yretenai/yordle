/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IStringGet
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IScriptValueGet.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IStringGet : public IScriptValueGet {
        explicit IStringGet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1166962967u || IScriptValueGet::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_IStringGet
#endif
