/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xc58386
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xc58386 : public IOptionItemFilter {
        explicit xc58386(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 12944262u || IOptionItemFilter::is_type(type);
        }

        bool xc77c4866 = false;
    };
}
#define YORDLE_META_DEF_xc58386
#endif
