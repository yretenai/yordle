/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x407b58d1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x407b58d1 : public bin_class {
        explicit x407b58d1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1081825489u;
        }

        yordle::data::meta::bin_fnv_hash xd7a4e88f = 0u;
        yordle::data::meta::bin_fnv_hash closeButton = 0u;
    };
}
#define YORDLE_META_DEF_x407b58d1
#endif
