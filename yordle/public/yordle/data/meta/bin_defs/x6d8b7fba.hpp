/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6d8b7fba
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6d8b7fba : public bin_class {
        explicit x6d8b7fba(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1837858746u;
        }

        yordle::data::meta::bin_fnv_hash xdc4a41ff = 0u;
        yordle::data::meta::bin_fnv_hash x351de0c4 = 0u;
        yordle::data::meta::bin_fnv_hash xfbd508b7 = 0u;
        yordle::data::meta::bin_fnv_hash x3b5d2f94 = 0u;
        yordle::data::meta::bin_fnv_hash xa67dbab3 = 0u;
    };
}
#define YORDLE_META_DEF_x6d8b7fba
#endif