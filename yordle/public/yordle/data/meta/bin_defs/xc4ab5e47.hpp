/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xc4ab5e47
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xfd9d4983.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xc4ab5e47 : public xfd9d4983 {
        explicit xc4ab5e47(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3299565127u || xfd9d4983::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xc4ab5e47
#endif
