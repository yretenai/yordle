/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf0f3a045
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf0f3a045 : public bin_class {
        explicit xf0f3a045(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4042498117u;
        }

        yordle::data::meta::bin_fnv_hash xd20a71a6 = 0u;
        yordle::data::meta::bin_fnv_hash Icon = 0u;
    };
}
#define YORDLE_META_DEF_xf0f3a045
#endif
