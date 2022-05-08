/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xece05abc
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/IContextualCondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xece05abc : public IContextualCondition {
        explicit xece05abc(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3974126268u || IContextualCondition::is_type(type);
        }

        float x3faea5ce = 0.0f;
        uint8_t x728eb9a3 = 0u;
    };
}
#define YORDLE_META_DEF_xece05abc
#endif
