/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2610e5a7
#pragma once

#include <memory>
#include <map>
#include <string>

#include <yordle/data/meta/bin_defs/x88246c04.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x88246c04
    struct x88246c04;
#endif
    struct YORDLE_EXPORT x2610e5a7 : public bin_class {
        explicit x2610e5a7(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 638641575u;
        }

        yordle::data::meta::bin_fnv_hash xfa144e3e = 0u;
        yordle::data::meta::bin_fnv_hash ItemIcon = 0u;
        yordle::data::meta::bin_fnv_hash x33e73b8c = 0u;
        yordle::data::meta::bin_fnv_hash x5cdf1384 = 0u;
        yordle::data::meta::bin_fnv_hash x14541cac = 0u;
        yordle::data::meta::bin_fnv_hash xa768acad = 0u;
        std::shared_ptr<yordle::data::meta::x88246c04> xb08eaa53 {};
        std::map<std::string, std::shared_ptr<yordle::data::meta::x88246c04>> x7348db33 {};
        yordle::data::meta::bin_fnv_hash x30145a7e = 0u;
    };
}
#define YORDLE_META_DEF_x2610e5a7
#endif
