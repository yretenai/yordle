/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapParticle
#pragma once

#include <memory>
#include <cstdint>
#include <array>
#include <string>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/MapPlaceable.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT MapParticle : public MapPlaceable {
        explicit MapParticle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1496250051u || MapPlaceable::is_type(type);
        }

        yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData> system { 1171098015 };
        bool eyeCandy = false;
        bool Transitional = false;
        int32_t quality = 31;
        uint32_t visibilityMode = 0u;
        std::array<float, 4> colorModulate { 1, 1, 1, 1 };
        std::string groupName {};
        bool startDisabled = false;
    };
}
#define YORDLE_META_DEF_MapParticle
#endif
