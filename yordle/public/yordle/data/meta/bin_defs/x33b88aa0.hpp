/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x33b88aa0
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x33b88aa0 : public bin_class {
        explicit x33b88aa0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 867732128u;
        }

        yordle::data::meta::bin_fnv_hash x3483f35e = 0u;
        yordle::data::meta::bin_fnv_hash xa5b85430 = 0u;
    };
}
#define YORDLE_META_DEF_x33b88aa0
#endif
