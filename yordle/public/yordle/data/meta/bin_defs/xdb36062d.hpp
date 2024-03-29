/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xdb36062d
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x4e9d7735.hpp>
#include <yordle/data/meta/bin_defs/xb2feedb2.hpp>
#include <yordle/data/meta/bin_defs/x45652c20.hpp>
#include <yordle/data/meta/bin_defs/x340536c7.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x4e9d7735
    struct x4e9d7735;
#endif

#ifndef YORDLE_META_DEF_xb2feedb2
    struct xb2feedb2;
#endif

#ifndef YORDLE_META_DEF_x45652c20
    struct x45652c20;
#endif

#ifndef YORDLE_META_DEF_x340536c7
    struct x340536c7;
#endif
    struct YORDLE_EXPORT xdb36062d : public bin_class {
        explicit xdb36062d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3677750829u;
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash xea5ca73 = 0u;
        yordle::data::meta::bin_fnv_hash x2a0db0e6 = 0u;
        yordle::data::meta::bin_fnv_hash x558e874a = 0u;
        yordle::data::meta::bin_fnv_hash DragRegion = 0u;
        yordle::data::meta::bin_fnv_hash xb358fc4 = 0u;
        yordle::data::meta::bin_fnv_hash x658b3c67 = 0u;
        yordle::data::meta::bin_fnv_hash xf489f73f = 0u;
        yordle::data::meta::bin_fnv_hash x4e20b84b = 0u;
        yordle::data::meta::bin_fnv_hash x44ed626d = 0u;
        yordle::data::meta::bin_fnv_hash xe7c76f21 = 0u;
        std::shared_ptr<yordle::data::meta::x4e9d7735> x832fe195 {};
        std::shared_ptr<yordle::data::meta::xb2feedb2> x3ea667a {};
        std::shared_ptr<yordle::data::meta::x45652c20> x6207f410 {};
        yordle::data::meta::bin_fnv_hash xfe28c700 = 0u;
        yordle::data::meta::bin_fnv_hash xd3faa4c3 = 0u;
        std::shared_ptr<yordle::data::meta::x340536c7> xa1d364f {};
    };
}
#define YORDLE_META_DEF_xdb36062d
#endif
