/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xea2ab5ca
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xea2ab5ca : public IGameCalculationPart {
        explicit xea2ab5ca(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3928667594u || IGameCalculationPart::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash buffName = 0u;
        std::string x9318830f {};
        std::string x61082251 {};
        float Coefficient = 1.0f;
    };
}
#define YORDLE_META_DEF_xea2ab5ca
#endif
