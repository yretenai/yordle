/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa6f7c24c
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xa6f7c24c : public IOptionItemFilter {
        explicit xa6f7c24c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2801254988u || IOptionItemFilter::is_type(type);
        }

        std::string x4060d426 {};
    };
}
#define YORDLE_META_DEF_xa6f7c24c
#endif
