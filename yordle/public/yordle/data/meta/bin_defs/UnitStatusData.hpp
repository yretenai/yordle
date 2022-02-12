/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_UnitStatusData
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <optional>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT UnitStatusData : public bin_class {
        explicit UnitStatusData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1273755329u;
        }

        uint32_t locType = 0u;
        uint32_t attackableUnitStatusType = 11u;
        std::string statusName {};
        std::optional<std::array<uint8_t, 4>> textColor {};
        std::array<float, 4> xc22d5164 { 0, 0, 0, 0 };
    };
}
#define YORDLE_META_DEF_UnitStatusData
#endif
