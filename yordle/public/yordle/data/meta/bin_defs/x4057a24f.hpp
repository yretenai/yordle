/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4057a24f
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4057a24f : public bin_class {
        explicit x4057a24f(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1079485007u;
        }

        yordle::data::meta::bin_fnv_hash xc5611fe2 = 0u;
        yordle::data::meta::bin_fnv_hash xf5b8026a = 0u;
        yordle::data::meta::bin_fnv_hash x14f72c9 = 0u;
    };
}
#define YORDLE_META_DEF_x4057a24f
#endif
