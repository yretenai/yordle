/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x828bfdbd
#pragma once

#include <memory>
#include <vector>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xc7d8a802.hpp>
#include <yordle/data/meta/bin_defs/x231dd1a2.hpp>
#include <yordle/data/meta/bin_defs/x89fa8d1c.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xc7d8a802
    struct xc7d8a802;
#endif

#ifndef YORDLE_META_DEF_x231dd1a2
    struct x231dd1a2;
#endif
    struct YORDLE_EXPORT x828bfdbd : public x89fa8d1c {
        explicit x828bfdbd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2190212541u || x89fa8d1c::is_type(type);
        }

        float xe9f33fa7 = 0.0f;
        bool IsEnabled = true;
        std::shared_ptr<yordle::data::meta::xc7d8a802> x8178e6ff {};
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::x231dd1a2>> xa2a39d73 {};
        uint8_t xc84bbe59 = 0u;
    };
}
#define YORDLE_META_DEF_x828bfdbd
#endif
