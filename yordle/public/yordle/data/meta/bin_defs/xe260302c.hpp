/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe260302c
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x66615e8b.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xe260302c : public x66615e8b {
        explicit xe260302c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3797954604u || x66615e8b::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xe260302c
#endif
