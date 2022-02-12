/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AddHealthCheat
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/Cheat.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT AddHealthCheat : public Cheat {
        explicit AddHealthCheat(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2639255897u || Cheat::is_type(type);
        }

        uint32_t mTarget = 1u;
        float mAmount = 0.0;
    };
}
#define YORDLE_META_DEF_AddHealthCheat
#endif