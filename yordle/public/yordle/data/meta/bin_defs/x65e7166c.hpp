/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x65e7166c
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xaba5f12d.hpp>
#include <yordle/data/meta/bin_defs/xf795f405.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xaba5f12d
    struct xaba5f12d;
#endif
    struct YORDLE_EXPORT x65e7166c : public xf795f405 {
        explicit x65e7166c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1709643372u || xf795f405::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::xaba5f12d> xf6898e98 {};
        float x4939f3f8 = 0.5f;
    };
}
#define YORDLE_META_DEF_x65e7166c
#endif
