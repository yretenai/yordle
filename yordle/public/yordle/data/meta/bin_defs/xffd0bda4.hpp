/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xffd0bda4
#pragma once

#include <memory>
#include <map>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xffd0bda4 : public bin_class {
        explicit xffd0bda4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4291870116u;
        }

        yordle::data::meta::bin_fnv_hash xb78f6b40 = 0u;
        yordle::data::meta::bin_fnv_hash x5d525afe = 0u;
        yordle::data::meta::bin_fnv_hash x4dafc8b6 = 0u;
        yordle::data::meta::bin_fnv_hash x729bdec2 = 0u;
        std::map<yordle::data::meta::bin_fnv_hash, yordle::data::meta::bin_fnv_hash> x5f80ef7a {};
    };
}
#define YORDLE_META_DEF_xffd0bda4
#endif