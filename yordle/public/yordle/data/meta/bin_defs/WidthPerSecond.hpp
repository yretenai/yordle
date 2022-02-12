/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_WidthPerSecond
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT WidthPerSecond : public MissileBehaviorSpec {
        explicit WidthPerSecond(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 768590138u || MissileBehaviorSpec::is_type(type);
        }

        float mWidthPerSecond = 0.0;
    };
}
#define YORDLE_META_DEF_WidthPerSecond
#endif
