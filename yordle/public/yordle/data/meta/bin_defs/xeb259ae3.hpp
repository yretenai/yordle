/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xeb259ae3
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x4a2fe72c.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x4a2fe72c
    struct x4a2fe72c;
#endif
    struct YORDLE_EXPORT xeb259ae3 : public bin_class {
        explicit xeb259ae3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3945110243u;
        }

        std::shared_ptr<yordle::data::meta::x4a2fe72c> x7b7999e2 {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x7c799b75 {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x797996bc {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x7a79984f {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x77799396 {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x78799529 {};
        std::shared_ptr<yordle::data::meta::x4a2fe72c> x75799070 {};
    };
}
#define YORDLE_META_DEF_xeb259ae3
#endif
