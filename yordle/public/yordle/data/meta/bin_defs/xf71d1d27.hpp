/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf71d1d27
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf71d1d27 : public bin_class {
        explicit xf71d1d27(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4145880359u;
        }

        yordle::data::meta::bin_fnv_hash ViewController = 0u;
    };
}
#define YORDLE_META_DEF_xf71d1d27
#endif
