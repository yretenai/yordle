/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd0116dc8
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/x7a851cd8.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd0116dc8 : public x7a851cd8 {
        explicit xd0116dc8(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3490803144u || x7a851cd8::is_type(type);
        }

        std::string mKeyName {};
    };
}
#define YORDLE_META_DEF_xd0116dc8
#endif
