/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf7fcc091
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x5c93a47b.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf7fcc091 : public x5c93a47b {
        explicit xf7fcc091(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4160536721u || x5c93a47b::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xf7fcc091
#endif
