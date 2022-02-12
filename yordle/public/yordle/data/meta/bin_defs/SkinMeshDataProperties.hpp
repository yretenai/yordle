/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SkinMeshDataProperties
#pragma once

#include <memory>
#include <string>
#include <optional>
#include <array>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/IMaterialDef.hpp>
#include <yordle/data/meta/bin_defs/BaseRigPoseModifierData.hpp>
#include <yordle/data/meta/bin_defs/SkinMeshDataProperties_MaterialOverride.hpp>
#include <yordle/data/meta/bin_defs/SkinnedMeshDataMaterialController.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IMaterialDef
    struct IMaterialDef;
#endif

#ifndef YORDLE_META_DEF_BaseRigPoseModifierData
    struct BaseRigPoseModifierData;
#endif

#ifndef YORDLE_META_DEF_SkinMeshDataProperties_MaterialOverride
    struct SkinMeshDataProperties_MaterialOverride;
#endif

#ifndef YORDLE_META_DEF_SkinnedMeshDataMaterialController
    struct SkinnedMeshDataMaterialController;
#endif
    struct YORDLE_EXPORT SkinMeshDataProperties : public bin_class {
        explicit SkinMeshDataProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1628559524u;
        }

        std::string skeleton {};
        std::string simpleSkin {};
        std::string texture {};
        std::string emissiveTexture {};
        std::string glossTexture {};
        float skinScale = 1.0;
        float selfIllumination = 0.0;
        bool xd62df07c = false;
        float brushAlphaOverride = 0.25;
        std::optional<std::array<float, 3>> overrideBoundingBox {};
        yordle::data::meta::bin_ref<yordle::data::meta::IMaterialDef> material { 3975636772 };
        float boundingCylinderRadius = 50.0;
        float boundingCylinderHeight = 150.0;
        std::optional<float> boundingSphereRadius {};
        std::array<uint8_t, 4> fresnelColor { 0, 0, 0, 255 };
        float fresnel = 0.0;
        bool usesSkinVO = false;
        bool castShadows = true;
        bool allowCharacterInking = true;
        std::string reflectionMap {};
        float reflectionOpacityDirect = 0.0;
        float reflectionOpacityGlancing = 1.0;
        float reflectionFresnel = 1.0;
        std::array<uint8_t, 4> reflectionFresnelColor { 255, 255, 255, 255 };
        std::string initialSubmeshToHide {};
        std::string initialSubmeshShadowsToHide {};
        std::string initialSubmeshMouseOversToHide {};
        std::string submeshRenderOrder {};
        bool x2543480a = false;
        std::vector<std::shared_ptr<yordle::data::meta::BaseRigPoseModifierData>> rigPoseModifierData {};
        std::vector<std::shared_ptr<yordle::data::meta::SkinMeshDataProperties_MaterialOverride>> materialOverride {};
        std::shared_ptr<yordle::data::meta::SkinnedMeshDataMaterialController> materialController {};
    };
}
#define YORDLE_META_DEF_SkinMeshDataProperties
#endif
