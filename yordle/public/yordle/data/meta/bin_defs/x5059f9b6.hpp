/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x5059f9b6
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/xbaddec44.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xbaddec44
    struct xbaddec44;
#endif
    struct YORDLE_EXPORT x5059f9b6 : public bin_class {
        explicit x5059f9b6(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1348073910u;
        }

        std::shared_ptr<yordle::data::meta::xbaddec44> xce58156a {};
        std::array<yordle::data::meta::bin_fnv_hash, 12> x67126180 { 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u };
        yordle::data::meta::bin_fnv_hash x7f3b5da6 = 0u;
        yordle::data::meta::bin_fnv_hash xcf8df2c8 = 0u;
    };
}
#define YORDLE_META_DEF_x5059f9b6
#endif
