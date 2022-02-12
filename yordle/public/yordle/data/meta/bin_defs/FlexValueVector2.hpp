/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FlexValueVector2
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ValueVector2.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ValueVector2
    struct ValueVector2;
#endif
    struct YORDLE_EXPORT FlexValueVector2 : public bin_class {
        explicit FlexValueVector2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1096844206u;
        }

        uint32_t mFlexID = 0u;
        std::shared_ptr<yordle::data::meta::ValueVector2> mValue {};
    };
}
#define YORDLE_META_DEF_FlexValueVector2
#endif