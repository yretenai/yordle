/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudTeamFightData
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/HudMenuTransitionData.hpp>
#include <yordle/data/meta/bin_defs/HudTeamFightOffScreenDifferentiationData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_HudMenuTransitionData
    struct HudMenuTransitionData;
#endif

#ifndef YORDLE_META_DEF_HudTeamFightOffScreenDifferentiationData
    struct HudTeamFightOffScreenDifferentiationData;
#endif
    struct YORDLE_EXPORT HudTeamFightData : public bin_class {
        explicit HudTeamFightData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3784622423u;
        }

        std::shared_ptr<yordle::data::meta::HudMenuTransitionData> mSceneTransition {};
        uint32_t mStyleFlags = 0u;
        std::shared_ptr<yordle::data::meta::HudTeamFightOffScreenDifferentiationData> xa7620c86 {};
    };
}
#define YORDLE_META_DEF_HudTeamFightData
#endif
