/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x72c992e3
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xc9dd46d2.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x72c992e3 : public xc9dd46d2 {
        explicit x72c992e3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1925812963u || xc9dd46d2::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x72c992e3
#endif
