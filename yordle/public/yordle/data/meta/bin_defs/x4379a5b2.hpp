/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4379a5b2
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/IGameCalculationPart.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IGameCalculationPart
    struct IGameCalculationPart;
#endif
    struct YORDLE_EXPORT x4379a5b2 : public bin_class {
        explicit x4379a5b2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1132045746u;
        }

        uint8_t x5c92b7f2 = 33u;
        uint8_t xaca5b9b4 = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::IGameCalculationPart>> x583da425 {};
    };
}
#define YORDLE_META_DEF_x4379a5b2
#endif
