/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x3e59e2ca
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x3e59e2ca : public IOptionItemFilter {
        explicit x3e59e2ca(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1046078154u || IOptionItemFilter::is_type(type);
        }

        bool x7b98ffdd = false;
        bool x812748a2 = false;
        bool x37985b59 = false;
    };
}
#define YORDLE_META_DEF_x3e59e2ca
#endif