/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb5e27400
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb5e27400 : public bin_class {
        explicit xb5e27400(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3051516928u;
        }

        yordle::data::meta::bin_fnv_hash Group = 0u;
        yordle::data::meta::bin_fnv_hash x5dd34f6 = 0u;
        yordle::data::meta::bin_fnv_hash x2f0c1d34 = 0u;
        yordle::data::meta::bin_fnv_hash x868e69a1 = 0u;
        yordle::data::meta::bin_fnv_hash xecb8bd25 = 0u;
    };
}
#define YORDLE_META_DEF_xb5e27400
#endif
