/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xc4244dee
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xc4244dee : public bin_class {
        explicit xc4244dee(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3290713582u;
        }

        std::array<float, 3> xc98f4557 { -1000.0f, -1000.0f, -1000.0f };
        std::array<float, 3> xd7a2e319 { 1000.0f, 1000.0f, 1000.0f };
    };
}
#define YORDLE_META_DEF_xc4244dee
#endif