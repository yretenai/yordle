/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x3c8d0b5d
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x3c8d0b5d : public bin_class {
        explicit x3c8d0b5d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1015876445u;
        }

        std::array<yordle::data::meta::bin_fnv_hash, 3> x7521711d { 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_x3c8d0b5d
#endif
