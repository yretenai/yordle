/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x21695480
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x83d6eef9.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x83d6eef9
    struct x83d6eef9;
#endif
    struct YORDLE_EXPORT x21695480 : public x83d6eef9 {
        explicit x21695480(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 560551040u || x83d6eef9::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x83d6eef9> Filter {};
    };
}
#define YORDLE_META_DEF_x21695480
#endif
