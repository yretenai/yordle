/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x11bfa7a1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xaba5f12d.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x11bfa7a1 : public xaba5f12d {
        explicit x11bfa7a1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 297772961u || xaba5f12d::is_type(type);
        }

        float Scale = 1.0f;
        float xba467ec4 = -1.0f;
    };
}
#define YORDLE_META_DEF_x11bfa7a1
#endif
