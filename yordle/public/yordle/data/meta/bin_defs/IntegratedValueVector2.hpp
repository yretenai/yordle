/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IntegratedValueVector2
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ValueVector2.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IntegratedValueVector2 : public ValueVector2 {
        explicit IntegratedValueVector2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1808563568u || ValueVector2::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_IntegratedValueVector2
#endif
