/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xface6a25
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xe76e6115.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xface6a25 : public xe76e6115 {
        explicit xface6a25(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4207831589u || xe76e6115::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xface6a25
#endif
