/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x5a730cb9
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x2c04ede0.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x5a730cb9 : public x2c04ede0 {
        explicit x5a730cb9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1517489337u || x2c04ede0::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x5a730cb9
#endif