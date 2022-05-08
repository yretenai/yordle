/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LinearTransformProcessorData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ValueProcessorData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT LinearTransformProcessorData : public ValueProcessorData {
        explicit LinearTransformProcessorData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1133034384u || ValueProcessorData::is_type(type);
        }

        float mMultiplier = 0.0f;
        float mIncrement = 0.0f;
    };
}
#define YORDLE_META_DEF_LinearTransformProcessorData
#endif
