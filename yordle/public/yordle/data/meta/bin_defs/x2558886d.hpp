/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2558886d
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/x6526fc8.hpp>
#include <yordle/data/meta/bin_defs/x736a7c64.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x6526fc8
    struct x6526fc8;
#endif

#ifndef YORDLE_META_DEF_x736a7c64
    struct x736a7c64;
#endif
    struct YORDLE_EXPORT x2558886d : public ViewController {
        explicit x2558886d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 626559085u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::string xeac10e8a {};
        std::string x8b76c33f {};
        yordle::data::meta::bin_fnv_hash xac751fe = 0u;
        yordle::data::meta::bin_fnv_hash x9b68d1be = 0u;
        yordle::data::meta::bin_fnv_hash xab91ba1f = 0u;
        yordle::data::meta::bin_fnv_hash x7b65b457 = 0u;
        yordle::data::meta::bin_fnv_hash xc190adfd = 0u;
        yordle::data::meta::bin_fnv_hash x6dc4396c = 0u;
        yordle::data::meta::bin_fnv_hash xa2718963 = 0u;
        std::shared_ptr<yordle::data::meta::x6526fc8> x8e3c4be4 {};
        std::shared_ptr<yordle::data::meta::x736a7c64> x4762c958 {};
    };
}
#define YORDLE_META_DEF_x2558886d
#endif
