/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MinimapIconColorData
#pragma once

#include <memory>
#include <cstdint>
#include <array>
#include <optional>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT MinimapIconColorData : public bin_class {
        explicit MinimapIconColorData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 59888480u;
        }

        std::array<uint8_t, 4> mBase { 0, 0, 0, 255 };
        std::optional<std::array<uint8_t, 4>> mColorblind {};
    };
}
#define YORDLE_META_DEF_MinimapIconColorData
#endif
