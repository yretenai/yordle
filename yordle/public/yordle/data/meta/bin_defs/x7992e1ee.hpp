/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7992e1ee
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/x9fd8bcfd.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x1c494c09
    struct x1c494c09;
#endif
    struct YORDLE_EXPORT x7992e1ee : public x9fd8bcfd {
        explicit x7992e1ee(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2039669230u || x9fd8bcfd::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x1c494c09> Location {};
    };
}
#define YORDLE_META_DEF_x7992e1ee
#endif
