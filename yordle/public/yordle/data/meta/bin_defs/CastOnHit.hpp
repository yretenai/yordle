/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CastOnHit
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CastOnHit : public MissileBehaviorSpec {
        explicit CastOnHit(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3656718200u || MissileBehaviorSpec::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_CastOnHit
#endif