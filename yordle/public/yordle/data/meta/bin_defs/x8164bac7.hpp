/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x8164bac7
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x2925d554.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x2925d554
    struct x2925d554;
#endif
    struct YORDLE_EXPORT x8164bac7 : public bin_class {
        explicit x8164bac7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2170862279u;
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash xcac17cff = 0u;
        std::shared_ptr<yordle::data::meta::x2925d554> x1f681491 {};
    };
}
#define YORDLE_META_DEF_x8164bac7
#endif
