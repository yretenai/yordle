/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf02f881
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf02f881 : public bin_class {
        explicit xf02f881(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 251852929u;
        }

        yordle::data::meta::bin_fnv_hash x7f9566b7 = 0u;
        yordle::data::meta::bin_fnv_hash x81999f36 = 0u;
        yordle::data::meta::bin_fnv_hash xee313940 = 0u;
        yordle::data::meta::bin_fnv_hash xdffc8083 = 0u;
    };
}
#define YORDLE_META_DEF_xf02f881
#endif
