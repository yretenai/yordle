/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2b58b8dd
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x75259ad3.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x2b58b8dd : public x75259ad3 {
        explicit x2b58b8dd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 727234781u || x75259ad3::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x2b58b8dd
#endif
