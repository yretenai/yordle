/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x3cd8dbcd
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/MissileTriggeredActionSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x3cd8dbcd : public MissileTriggeredActionSpec {
        explicit x3cd8dbcd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1020845005u || MissileTriggeredActionSpec::is_type(type);
        }

        uint32_t x37a74ce3 = 0u;
        float x90292654 = 0.0f;
    };
}
#define YORDLE_META_DEF_x3cd8dbcd
#endif
