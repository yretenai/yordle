/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xee405aca
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xec2d115.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xee405aca : public xec2d115 {
        explicit xee405aca(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3997194954u || xec2d115::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xee405aca
#endif
