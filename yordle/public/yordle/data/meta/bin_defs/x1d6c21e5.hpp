/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1d6c21e5
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/x7d3f50ac.hpp>
#include <yordle/data/meta/bin_defs/x42bac271.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x7d3f50ac
    struct x7d3f50ac;
#endif

#ifndef YORDLE_META_DEF_x42bac271
    struct x42bac271;
#endif
    struct YORDLE_EXPORT x1d6c21e5 : public ViewController {
        explicit x1d6c21e5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 493625829u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x4d302530 = 0u;
        yordle::data::meta::bin_fnv_hash xbf427490 = 0u;
        std::shared_ptr<yordle::data::meta::x7d3f50ac> xaef7b46b {};
        std::shared_ptr<yordle::data::meta::x42bac271> xfb0bf90e {};
        std::string xe095d841 {};
    };
}
#define YORDLE_META_DEF_x1d6c21e5
#endif
