/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6dd26f3a
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/xcff54e31.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6dd26f3a : public xcff54e31 {
        explicit x6dd26f3a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1842507578u || xcff54e31::is_type(type);
        }

        std::string x99e6dbfe {};
        std::string falloffTexture {};
    };
}
#define YORDLE_META_DEF_x6dd26f3a
#endif