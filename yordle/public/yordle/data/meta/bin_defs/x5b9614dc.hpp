/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x5b9614dc
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/TargetingTypeData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x5b9614dc : public TargetingTypeData {
        explicit x5b9614dc(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1536562396u || TargetingTypeData::is_type(type);
        }

        float x9ac4d782 = 0.0;
    };
}
#define YORDLE_META_DEF_x5b9614dc
#endif