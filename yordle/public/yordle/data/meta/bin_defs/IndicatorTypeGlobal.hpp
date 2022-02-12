/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IndicatorTypeGlobal
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ILineIndicatorType.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT IndicatorTypeGlobal : public ILineIndicatorType {
        explicit IndicatorTypeGlobal(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2357149705u || ILineIndicatorType::is_type(type);
        }

        bool mIsFloating = false;
    };
}
#define YORDLE_META_DEF_IndicatorTypeGlobal
#endif
