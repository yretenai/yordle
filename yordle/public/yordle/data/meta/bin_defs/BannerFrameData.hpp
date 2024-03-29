/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BannerFrameData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/AnimationGraphData.hpp>
#include <yordle/data/meta/bin_defs/SkinMeshDataProperties.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_AnimationGraphData
    struct AnimationGraphData;
#endif

#ifndef YORDLE_META_DEF_SkinMeshDataProperties
    struct SkinMeshDataProperties;
#endif
    struct YORDLE_EXPORT BannerFrameData : public bin_class {
        explicit BannerFrameData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3564953724u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::AnimationGraphData> AnimationGraphData { 4126869447 };
        std::shared_ptr<yordle::data::meta::SkinMeshDataProperties> skinMeshProperties {};
    };
}
#define YORDLE_META_DEF_BannerFrameData
#endif
