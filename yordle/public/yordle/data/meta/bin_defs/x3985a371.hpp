/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x3985a371
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xfd9d4983.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x3985a371 : public xfd9d4983 {
        explicit x3985a371(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 965059441u || xfd9d4983::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x3985a371
#endif
