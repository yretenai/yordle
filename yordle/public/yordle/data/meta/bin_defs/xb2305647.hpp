/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb2305647
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x366824d6.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb2305647 : public x366824d6 {
        explicit xb2305647(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2989512263u || x366824d6::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xb2305647
#endif
