/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x282feae0
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xe3af402a.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xe3af402a
    struct xe3af402a;
#endif
    struct YORDLE_EXPORT x282feae0 : public bin_class {
        explicit x282feae0(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 674228960u;
        }

        yordle::data::meta::bin_fnv_hash x6eac67fc = 0u;
        yordle::data::meta::bin_fnv_hash xf682bece = 0u;
        yordle::data::meta::bin_fnv_hash x3f180dc8 = 0u;
        std::shared_ptr<yordle::data::meta::xe3af402a> xdefe5eb0 {};
    };
}
#define YORDLE_META_DEF_x282feae0
#endif
