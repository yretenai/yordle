/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf53e93a1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x7a9a96ff.hpp>
#include <yordle/data/meta/bin_defs/x700d0136.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7a9a96ff
    struct x7a9a96ff;
#endif
    struct YORDLE_EXPORT xf53e93a1 : public x700d0136 {
        explicit xf53e93a1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4114518945u || x700d0136::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x77af310c = 0u;
        yordle::data::meta::bin_fnv_hash x832a4da7 = 0u;
        yordle::data::meta::bin_fnv_hash x1339cb3 = 0u;
        std::shared_ptr<yordle::data::meta::x7a9a96ff> xaa30297a {};
    };
}
#define YORDLE_META_DEF_xf53e93a1
#endif
