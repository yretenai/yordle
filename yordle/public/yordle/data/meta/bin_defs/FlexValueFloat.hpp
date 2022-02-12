/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FlexValueFloat
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ValueFloat.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ValueFloat
    struct ValueFloat;
#endif
    struct YORDLE_EXPORT FlexValueFloat : public bin_class {
        explicit FlexValueFloat(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1370198255u;
        }

        uint32_t mFlexID = 0u;
        std::shared_ptr<yordle::data::meta::ValueFloat> mValue {};
    };
}
#define YORDLE_META_DEF_FlexValueFloat
#endif