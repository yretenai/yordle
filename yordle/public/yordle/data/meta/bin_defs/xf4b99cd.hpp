/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf4b99cd
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1fac8b64.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf4b99cd : public x1fac8b64 {
        explicit xf4b99cd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 256612813u || x1fac8b64::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xf4b99cd
#endif
