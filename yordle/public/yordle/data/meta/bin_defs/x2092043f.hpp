/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2092043f
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1fac8b64.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x2092043f : public x1fac8b64 {
        explicit x2092043f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 546440255u || x1fac8b64::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x2092043f
#endif
