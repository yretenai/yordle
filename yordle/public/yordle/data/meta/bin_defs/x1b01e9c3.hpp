/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1b01e9c3
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xec2d115.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x1b01e9c3 : public xec2d115 {
        explicit x1b01e9c3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 453110211u || xec2d115::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x1b01e9c3
#endif