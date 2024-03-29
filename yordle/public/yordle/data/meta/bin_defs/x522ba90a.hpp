/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x522ba90a
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x522ba90a : public bin_class {
        explicit x522ba90a(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1378593034u;
        }

        float minHealth = 1000.0f;
        uint32_t microTicksBetween = 9u;
    };
}
#define YORDLE_META_DEF_x522ba90a
#endif
