/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x5a51d019
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/xf795f405.hpp>
#include <yordle/data/meta/bin_defs/x889fe194.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xf795f405
    struct xf795f405;
#endif
    struct YORDLE_EXPORT x5a51d019 : public x889fe194 {
        explicit x5a51d019(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1515311129u || x889fe194::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::xf795f405>> x721e9831 {};
        float x593032d8 = 0.0;
    };
}
#define YORDLE_META_DEF_x5a51d019
#endif