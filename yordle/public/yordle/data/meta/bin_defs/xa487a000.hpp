/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa487a000
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x9a2769a4.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xa487a000 : public x9a2769a4 {
        explicit xa487a000(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2760351744u || x9a2769a4::is_type(type);
        }

        bool value = false;
    };
}
#define YORDLE_META_DEF_xa487a000
#endif
