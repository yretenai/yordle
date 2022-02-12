/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_Target
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/TargetingTypeData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT Target : public TargetingTypeData {
        explicit Target(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 845187144u || TargetingTypeData::is_type(type);
        }

        bool x6f92d6b3 = false;
    };
}
#define YORDLE_META_DEF_Target
#endif
