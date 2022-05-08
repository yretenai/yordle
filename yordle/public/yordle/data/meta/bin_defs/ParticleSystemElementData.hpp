/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ParticleSystemElementData
#pragma once

#include <memory>
#include <cstdint>
#include <map>
#include <string>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/BaseElementData.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT ParticleSystemElementData : public BaseElementData {
        explicit ParticleSystemElementData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3716126038u || BaseElementData::is_type(type);
        }

        yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData> mVfxSystem { 1171098015 };
        uint32_t xc47cf6c7 = 1u;
        bool x2824440 = true;
        bool x8ef629c9 = true;
        float x91dec6fe = 1.0f;
        std::map<yordle::data::meta::bin_fnv_hash, std::string> x1a898c7d {};
    };
}
#define YORDLE_META_DEF_ParticleSystemElementData
#endif
