/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x9e2b8a86
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_defs/x2610e5a7.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x2610e5a7
    struct x2610e5a7;
#endif
    struct YORDLE_EXPORT x9e2b8a86 : public ViewController {
        explicit x9e2b8a86(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2653653638u || ViewController::is_type(type);
        }

        uint8_t x2b0d70e8 = 0u;
        bool x89a8419c = false;
        uint32_t x41aa9616 = 5u;
        uint32_t x143e4d96 = 16u;
        std::string xeac10e8a {};
        std::string x8b76c33f {};
        std::string x73ce2a6 {};
        std::string x3ad4379e {};
        std::string x8ff1b151 {};
        yordle::data::meta::bin_fnv_hash x4babd89d = 0u;
        yordle::data::meta::bin_fnv_hash xf5b8026a = 0u;
        yordle::data::meta::bin_fnv_hash xc5c5ca0 = 0u;
        std::shared_ptr<yordle::data::meta::x2610e5a7> xf2024d92 {};
        yordle::data::meta::bin_fnv_hash x4d302530 = 0u;
        yordle::data::meta::bin_fnv_hash x5b308567 = 0u;
        yordle::data::meta::bin_fnv_hash x9dcf971d = 0u;
        yordle::data::meta::bin_fnv_hash x71993a70 = 0u;
        yordle::data::meta::bin_fnv_hash xf7f3f138 = 0u;
        float xba1d038c = 0.0;
        yordle::data::meta::bin_fnv_hash x75f9cc79 = 0u;
        float x5a0565cb = 0.0;
        yordle::data::meta::bin_fnv_hash xd8e77c8a = 0u;
        int32_t x5b720329 = 0;
        yordle::data::meta::bin_fnv_hash x33c9204f = 0u;
        yordle::data::meta::bin_fnv_hash x892bc919 = 0u;
    };
}
#define YORDLE_META_DEF_x9e2b8a86
#endif
