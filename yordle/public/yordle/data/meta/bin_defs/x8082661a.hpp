/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x8082661a
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/x6e03cc25.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x6e03cc25
    struct x6e03cc25;
#endif
    struct YORDLE_EXPORT x8082661a : public bin_class {
        explicit x8082661a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2156029466u;
        }

        std::array<std::shared_ptr<yordle::data::meta::x6e03cc25>, 3> xccaadab7 { nullptr, nullptr, nullptr };
        std::shared_ptr<yordle::data::meta::x6e03cc25> x7f34b6b3 {};
        yordle::data::meta::bin_fnv_hash xf43b8449 = 0u;
        float enlargeTime = 0.10000000149011612f;
        float enlargeSize = 1.2999999523162842f;
        float settleTime = 0.10000000149011612f;
    };
}
#define YORDLE_META_DEF_x8082661a
#endif
