/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7a9a96ff
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x7a9a96ff : public bin_class {
        explicit x7a9a96ff(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2056951551u;
        }

        yordle::data::meta::bin_fnv_hash x608ff0af = 0u;
        yordle::data::meta::bin_fnv_hash x115f9403 = 0u;
        yordle::data::meta::bin_fnv_hash xa6b63ca = 0u;
        yordle::data::meta::bin_fnv_hash x4a27a41d = 0u;
    };
}
#define YORDLE_META_DEF_x7a9a96ff
#endif
