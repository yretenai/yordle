/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xe20dd534
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/xf641c7ed.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xf641c7ed
    struct xf641c7ed;
#endif
    struct YORDLE_EXPORT xe20dd534 : public ViewController {
        explicit xe20dd534(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3792557364u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash x874efc21 = 0u;
        yordle::data::meta::bin_fnv_hash x538d27eb = 0u;
        yordle::data::meta::bin_fnv_hash x3ca13504 = 0u;
        yordle::data::meta::bin_fnv_hash xa064eee8 = 0u;
        yordle::data::meta::bin_fnv_hash Timer = 0u;
        yordle::data::meta::bin_fnv_hash x22d4499e = 0u;
        yordle::data::meta::bin_fnv_hash x76b767cf = 0u;
        yordle::data::meta::bin_fnv_hash x302ccf7d = 0u;
        yordle::data::meta::bin_fnv_hash xc26ddee = 0u;
        yordle::data::meta::bin_fnv_hash x2b77ba39 = 0u;
        yordle::data::meta::bin_fnv_hash x3ac7a0ba = 0u;
        std::shared_ptr<yordle::data::meta::xf641c7ed> xe5ffa4a9 {};
        std::array<yordle::data::meta::bin_fnv_hash, 5> x8ec66f8e { 0u, 0u, 0u, 0u, 0u };
    };
}
#define YORDLE_META_DEF_xe20dd534
#endif
