/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe3e9b36c
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x3ccabb2e.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xe3e9b36c : public x3ccabb2e {
        explicit xe3e9b36c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3823743852u || x3ccabb2e::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xe3e9b36c
#endif
