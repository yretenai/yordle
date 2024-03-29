/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_RegaliaData
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/BaseLoadoutData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT RegaliaData : public BaseLoadoutData {
        explicit RegaliaData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2286074286u || BaseLoadoutData::is_type(type);
        }

        std::string texture {};
    };
}
#define YORDLE_META_DEF_RegaliaData
#endif
