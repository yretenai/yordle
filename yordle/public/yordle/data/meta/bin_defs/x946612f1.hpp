/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x946612f1
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x946612f1 : public bin_class {
        explicit x946612f1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2489717489u;
        }

        yordle::data::meta::bin_fnv_hash x67f25899 = 0u;
        std::array<yordle::data::meta::bin_fnv_hash, 6> xa03379b8 { 0u, 0u, 0u, 0u, 0u, 0u };
        std::array<yordle::data::meta::bin_fnv_hash, 6> xdf5ee202 { 0u, 0u, 0u, 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_x946612f1
#endif
