/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7715ca2d
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x7715ca2d : public IOptionItemFilter {
        explicit x7715ca2d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1997916717u || IOptionItemFilter::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x7715ca2d
#endif
