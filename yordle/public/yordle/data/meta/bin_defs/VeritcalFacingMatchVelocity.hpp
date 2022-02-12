/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VeritcalFacingMatchVelocity
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VerticalFacingType.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VeritcalFacingMatchVelocity : public VerticalFacingType {
        explicit VeritcalFacingMatchVelocity(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3974501911u || VerticalFacingType::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_VeritcalFacingMatchVelocity
#endif
