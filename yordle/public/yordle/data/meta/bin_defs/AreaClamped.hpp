/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AreaClamped
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/TargetingTypeData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT AreaClamped : public TargetingTypeData {
        explicit AreaClamped(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 808547418u || TargetingTypeData::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_AreaClamped
#endif
