/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xfdca498e
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/x9a2769a4.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xfdca498e : public x9a2769a4 {
        explicit xfdca498e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4257892750u || x9a2769a4::is_type(type);
        }

        int32_t value = 0;
    };
}
#define YORDLE_META_DEF_xfdca498e
#endif
