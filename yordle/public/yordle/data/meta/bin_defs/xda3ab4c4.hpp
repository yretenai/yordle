/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xda3ab4c4
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xda3ab4c4 : public IFxAction {
        explicit xda3ab4c4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3661280452u || IFxAction::is_type(type);
        }

        float Magnitude = 20.0;
        float xc4afd6f9 = 6.0;
        float FalloffRate = 2.0;
        std::array<float, 3> Direction { 1, 1, 0 };
    };
}
#define YORDLE_META_DEF_xda3ab4c4
#endif