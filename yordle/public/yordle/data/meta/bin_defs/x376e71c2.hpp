/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x376e71c2
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x9e380c11.hpp>
#include <yordle/data/meta/bin_defs/xf8739c73.hpp>
#include <yordle/data/meta/bin_defs/x9b1b08e6.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x9e380c11
    struct x9e380c11;
#endif

#ifndef YORDLE_META_DEF_xf8739c73
    struct xf8739c73;
#endif

#ifndef YORDLE_META_DEF_x9b1b08e6
    struct x9b1b08e6;
#endif
    struct YORDLE_EXPORT x376e71c2 : public ViewController {
        explicit x376e71c2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 929984962u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x4c6557d5 = 0u;
        yordle::data::meta::bin_fnv_hash xe44c2603 = 0u;
        yordle::data::meta::bin_fnv_hash xea790206 = 0u;
        std::shared_ptr<yordle::data::meta::x9e380c11> x6f003bbf {};
        std::shared_ptr<yordle::data::meta::xf8739c73> x32925e75 {};
        std::shared_ptr<yordle::data::meta::x9b1b08e6> x1ec120bb {};
    };
}
#define YORDLE_META_DEF_x376e71c2
#endif
