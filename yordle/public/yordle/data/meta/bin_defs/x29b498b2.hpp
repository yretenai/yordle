/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x29b498b2
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x7a9a96ff.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7a9a96ff
    struct x7a9a96ff;
#endif
    struct YORDLE_EXPORT x29b498b2 : public bin_class {
        explicit x29b498b2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 699701426u;
        }

        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash Backdrop = 0u;
        yordle::data::meta::bin_fnv_hash xd61e0008 = 0u;
        std::shared_ptr<yordle::data::meta::x7a9a96ff> xf750283e {};
        yordle::data::meta::bin_fnv_hash xb6f9350f = 0u;
    };
}
#define YORDLE_META_DEF_x29b498b2
#endif