/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x66615e8b
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xf7fcc091.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x66615e8b : public xf7fcc091 {
        explicit x66615e8b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1717657227u || xf7fcc091::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x66615e8b
#endif
