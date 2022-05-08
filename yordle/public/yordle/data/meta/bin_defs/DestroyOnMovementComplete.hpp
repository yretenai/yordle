/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DestroyOnMovementComplete
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT DestroyOnMovementComplete : public MissileBehaviorSpec {
        explicit DestroyOnMovementComplete(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4211998018u || MissileBehaviorSpec::is_type(type);
        }

        int32_t mDelay = 0;
        bool x27ec5868 = true;
    };
}
#define YORDLE_META_DEF_DestroyOnMovementComplete
#endif
