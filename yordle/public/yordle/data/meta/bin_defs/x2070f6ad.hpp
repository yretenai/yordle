/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2070f6ad
#pragma once

#include <memory>
#include <map>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_defs/xb1a585e5.hpp>
#include <yordle/data/meta/bin_defs/x8082661a.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xb1a585e5
    struct xb1a585e5;
#endif

#ifndef YORDLE_META_DEF_x8082661a
    struct x8082661a;
#endif
    struct YORDLE_EXPORT x2070f6ad : public bin_class {
        explicit x2070f6ad(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 544274093u;
        }

        std::shared_ptr<yordle::data::meta::xb1a585e5> xc63599cc {};
        std::shared_ptr<yordle::data::meta::xb1a585e5> x6cdda7d8 {};
        std::shared_ptr<yordle::data::meta::xb1a585e5> xeeed182 {};
        std::shared_ptr<yordle::data::meta::xb1a585e5> xd86afeef {};
        std::shared_ptr<yordle::data::meta::xb1a585e5> x3c6735f3 {};
        std::map<uint32_t, yordle::data::meta::bin_fnv_hash> xf5f563c0 {};
        std::shared_ptr<yordle::data::meta::x8082661a> DefenseModifierIcons {};
        yordle::data::meta::bin_fnv_hash x65e1e746 = 0u;
        std::array<uint8_t, 4> xa08f8a73 { 255, 255, 255, 255 };
        std::array<uint8_t, 4> x40bdcbdd { 255, 255, 255, 255 };
        std::array<uint8_t, 4> xf267aecb { 255, 255, 255, 255 };
        std::array<uint8_t, 4> x4d3c5847 { 255, 255, 255, 255 };
    };
}
#define YORDLE_META_DEF_x2070f6ad
#endif
