/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xec2d115
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x68b3a178.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xec2d115 : public x68b3a178 {
        explicit xec2d115(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 247648533u || x68b3a178::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xec2d115
#endif
