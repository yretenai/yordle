/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x11f7583d
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xf7fcc091.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x11f7583d : public xf7fcc091 {
        explicit x11f7583d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 301422653u || xf7fcc091::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x11f7583d
#endif
