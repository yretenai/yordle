/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa502a9f5
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xa502a9f5 : public bin_class {
        explicit xa502a9f5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2768415221u;
        }

        yordle::data::meta::bin_fnv_hash x84f6f1cd = 0u;
    };
}
#define YORDLE_META_DEF_xa502a9f5
#endif
