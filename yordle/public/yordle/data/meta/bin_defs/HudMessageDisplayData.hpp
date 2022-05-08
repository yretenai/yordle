/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudMessageDisplayData
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_HudMenuTransitionData
    struct HudMenuTransitionData;
#endif
    struct YORDLE_EXPORT HudMessageDisplayData : public bin_class {
        explicit HudMessageDisplayData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1269294773u;
        }

        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> TransitionIn {};
        float x5d0f9396 = 5.0;
        uint32_t messageCount = 4u;
    };
}
#define YORDLE_META_DEF_HudMessageDisplayData
#endif
