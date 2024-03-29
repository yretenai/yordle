/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LiveFeatureToggles
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/LoLFeatureToggles.hpp>
#include <yordle/data/meta/bin_defs/GameplayFeatureToggles.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_LoLFeatureToggles
    struct LoLFeatureToggles;
#endif

#ifndef YORDLE_META_DEF_GameplayFeatureToggles
    struct GameplayFeatureToggles;
#endif
    struct YORDLE_EXPORT LiveFeatureToggles : public bin_class {
        explicit LiveFeatureToggles(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 954042444u;
        }

        std::shared_ptr<yordle::data::meta::LoLFeatureToggles> mLoLToggles {};
        std::shared_ptr<yordle::data::meta::GameplayFeatureToggles> mGameplayToggles {};
    };
}
#define YORDLE_META_DEF_LiveFeatureToggles
#endif
