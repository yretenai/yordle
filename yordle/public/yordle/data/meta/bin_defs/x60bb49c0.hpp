/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x60bb49c0
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xf10cf1d9.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x60bb49c0 : public xf10cf1d9 {
        explicit x60bb49c0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1622886848u || xf10cf1d9::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x60bb49c0
#endif
