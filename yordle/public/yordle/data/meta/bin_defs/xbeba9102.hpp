/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xbeba9102
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x70678bd0.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xbeba9102 : public x70678bd0 {
        explicit xbeba9102(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3199897858u || x70678bd0::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xbeba9102
#endif
