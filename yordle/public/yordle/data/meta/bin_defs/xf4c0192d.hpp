/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf4c0192d
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/x995ca734.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf4c0192d : public x995ca734 {
        explicit xf4c0192d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4106230061u || x995ca734::is_type(type);
        }

        std::array<float, 4> value { 1.0f, 0.0f, 0.0f, 0.0f };
    };
}
#define YORDLE_META_DEF_xf4c0192d
#endif