/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x49340fba
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_defs/x90347ed8.hpp>
#include <yordle/data/meta/bin_defs/x364f1782.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x90347ed8
    struct x90347ed8;
#endif

#ifndef YORDLE_META_DEF_x364f1782
    struct x364f1782;
#endif
    struct YORDLE_EXPORT x49340fba : public ViewController {
        explicit x49340fba(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1228148666u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x4d302530 = 0u;
        std::string xeac10e8a {};
        std::string x8b76c33f {};
        std::shared_ptr<yordle::data::meta::x90347ed8> x9ad5b45c {};
        std::shared_ptr<yordle::data::meta::x90347ed8> xb6f346eb {};
        std::shared_ptr<yordle::data::meta::x364f1782> x362914d8 {};
        yordle::data::meta::bin_fnv_hash xde1056f7 = 0u;
        yordle::data::meta::bin_fnv_hash xaec10d0a = 0u;
        yordle::data::meta::bin_fnv_hash x2681dad1 = 0u;
        yordle::data::meta::bin_fnv_hash xd7a9eb5 = 0u;
        std::array<uint8_t, 4> xb2717a62 { 44, 190, 233, 255 };
        std::array<uint8_t, 4> x5b58b41f { 44, 44, 233, 255 };
    };
}
#define YORDLE_META_DEF_x49340fba
#endif
