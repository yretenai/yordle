/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1239c84e
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/xb0d49a20.hpp>
#include <yordle/data/meta/bin_defs/x3c8d0b5d.hpp>
#include <yordle/data/meta/bin_defs/x69af20f0.hpp>
#include <yordle/data/meta/bin_defs/xaf7c0947.hpp>
#include <yordle/data/meta/bin_defs/x6d6cc142.hpp>
#include <yordle/data/meta/bin_defs/xcbdadf65.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xb0d49a20
    struct xb0d49a20;
#endif

#ifndef YORDLE_META_DEF_x3c8d0b5d
    struct x3c8d0b5d;
#endif

#ifndef YORDLE_META_DEF_x69af20f0
    struct x69af20f0;
#endif

#ifndef YORDLE_META_DEF_xaf7c0947
    struct xaf7c0947;
#endif

#ifndef YORDLE_META_DEF_x6d6cc142
    struct x6d6cc142;
#endif
    struct YORDLE_EXPORT x1239c84e : public xcbdadf65 {
        explicit x1239c84e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 305776718u || xcbdadf65::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xe501995f = 0u;
        yordle::data::meta::bin_fnv_hash x73c3e435 = 0u;
        yordle::data::meta::bin_fnv_hash x156a6d60 = 0u;
        std::shared_ptr<yordle::data::meta::xb0d49a20> xe6e3afce {};
        std::vector<yordle::data::meta::bin_fnv_hash> x10892008 {};
        std::shared_ptr<yordle::data::meta::x3c8d0b5d> x2c79840f {};
        std::shared_ptr<yordle::data::meta::x69af20f0> x4e9df72e {};
        std::shared_ptr<yordle::data::meta::xaf7c0947> xf2891050 {};
        yordle::data::meta::bin_ref<yordle::data::meta::x6d6cc142> x89aa9aac { 1835843906 };
    };
}
#define YORDLE_META_DEF_x1239c84e
#endif
