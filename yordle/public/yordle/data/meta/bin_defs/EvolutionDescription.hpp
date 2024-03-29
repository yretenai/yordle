/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_EvolutionDescription
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <array>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT EvolutionDescription : public bin_class {
        explicit EvolutionDescription(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3253985952u;
        }

        uint32_t mFlags = 0u;
        std::string mTitle {};
        std::array<std::string, 4> mTooltips { "", "", "", "" };
        std::array<std::string, 4> mIconNames { "", "", "", "" };
    };
}
#define YORDLE_META_DEF_EvolutionDescription
#endif
