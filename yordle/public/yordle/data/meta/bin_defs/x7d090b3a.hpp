/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7d090b3a
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x7d090b3a : public bin_class {
        explicit x7d090b3a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2097744698u;
        }

        yordle::data::meta::bin_fnv_hash x4b932928 = 0u;
        yordle::data::meta::bin_fnv_hash x4fa419b5 = 0u;
        yordle::data::meta::bin_fnv_hash x738917db = 0u;
        yordle::data::meta::bin_fnv_hash x52662fad = 0u;
        yordle::data::meta::bin_fnv_hash xa8f48b28 = 0u;
        yordle::data::meta::bin_fnv_hash x56ed0d27 = 0u;
    };
}
#define YORDLE_META_DEF_x7d090b3a
#endif
