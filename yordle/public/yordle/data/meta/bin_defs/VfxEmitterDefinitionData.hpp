/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxEmitterDefinitionData
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <map>
#include <vector>
#include <array>
#include <optional>

#include <yordle/data/meta/bin_defs/IMaterialDef.hpp>
#include <yordle/data/meta/bin_defs/IVfxMaterialDriver.hpp>
#include <yordle/data/meta/bin_defs/VfxFieldCollectionDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxMaterialOverrideDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxSoftParticleDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxAlphaErosionDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPaletteDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxReflectionDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxDistortionDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxEmissionSurfaceData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_defs/ValueFloat.hpp>
#include <yordle/data/meta/bin_defs/FlexValueFloat.hpp>
#include <yordle/data/meta/bin_defs/ValueVector3.hpp>
#include <yordle/data/meta/bin_defs/FlexValueVector3.hpp>
#include <yordle/data/meta/bin_defs/FlexTypeFloat.hpp>
#include <yordle/data/meta/bin_defs/FlexValueVector2.hpp>
#include <yordle/data/meta/bin_defs/ValueColor.hpp>
#include <yordle/data/meta/bin_defs/ValueVector2.hpp>
#include <yordle/data/meta/bin_defs/VfxShape.hpp>
#include <yordle/data/meta/bin_defs/xb13097f0.hpp>
#include <yordle/data/meta/bin_defs/IntegratedValueVector2.hpp>
#include <yordle/data/meta/bin_defs/IntegratedValueFloat.hpp>
#include <yordle/data/meta/bin_defs/IntegratedValueVector3.hpp>
#include <yordle/data/meta/bin_defs/VfxChildParticleSetDefinitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IMaterialDef
    struct IMaterialDef;
#endif

#ifndef YORDLE_META_DEF_IVfxMaterialDriver
    struct IVfxMaterialDriver;
#endif

#ifndef YORDLE_META_DEF_VfxFieldCollectionDefinitionData
    struct VfxFieldCollectionDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxMaterialOverrideDefinitionData
    struct VfxMaterialOverrideDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxSoftParticleDefinitionData
    struct VfxSoftParticleDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxAlphaErosionDefinitionData
    struct VfxAlphaErosionDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxPaletteDefinitionData
    struct VfxPaletteDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxReflectionDefinitionData
    struct VfxReflectionDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxDistortionDefinitionData
    struct VfxDistortionDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxEmissionSurfaceData
    struct VfxEmissionSurfaceData;
#endif

#ifndef YORDLE_META_DEF_VfxPrimitiveBase
    struct VfxPrimitiveBase;
#endif

#ifndef YORDLE_META_DEF_ValueFloat
    struct ValueFloat;
#endif

#ifndef YORDLE_META_DEF_FlexValueFloat
    struct FlexValueFloat;
#endif

#ifndef YORDLE_META_DEF_ValueVector3
    struct ValueVector3;
#endif

#ifndef YORDLE_META_DEF_FlexValueVector3
    struct FlexValueVector3;
#endif

#ifndef YORDLE_META_DEF_FlexTypeFloat
    struct FlexTypeFloat;
#endif

#ifndef YORDLE_META_DEF_FlexValueVector2
    struct FlexValueVector2;
#endif

#ifndef YORDLE_META_DEF_ValueColor
    struct ValueColor;
#endif

#ifndef YORDLE_META_DEF_ValueVector2
    struct ValueVector2;
#endif

#ifndef YORDLE_META_DEF_VfxShape
    struct VfxShape;
#endif

#ifndef YORDLE_META_DEF_xb13097f0
    struct xb13097f0;
#endif

#ifndef YORDLE_META_DEF_IntegratedValueVector2
    struct IntegratedValueVector2;
#endif

#ifndef YORDLE_META_DEF_IntegratedValueFloat
    struct IntegratedValueFloat;
#endif

#ifndef YORDLE_META_DEF_IntegratedValueVector3
    struct IntegratedValueVector3;
#endif

#ifndef YORDLE_META_DEF_VfxChildParticleSetDefinitionData
    struct VfxChildParticleSetDefinitionData;
#endif
    struct YORDLE_EXPORT VfxEmitterDefinitionData : public bin_class {
        explicit VfxEmitterDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 164488258u;
        }

        std::string emitterName {};
        bool disabled = false;
        bool disableBackfaceCull = false;
        bool isTexturePixelated = false;
        uint8_t renderPhaseOverride = 7u;
        uint8_t blendMode = 0u;
        uint8_t colorblindVisibility = 0u;
        uint8_t offsetLifeScalingSymmetryMode = 0u;
        yordle::data::meta::bin_ref<yordle::data::meta::IMaterialDef> material { 3975636772 };
        std::map<std::string, std::shared_ptr<yordle::data::meta::IVfxMaterialDriver>> materialDrivers {};
        std::shared_ptr<yordle::data::meta::VfxFieldCollectionDefinitionData> fieldCollectionDefinition {};
        std::vector<std::shared_ptr<yordle::data::meta::VfxMaterialOverrideDefinitionData>> materialOverrideDefinitions {};
        std::shared_ptr<yordle::data::meta::VfxSoftParticleDefinitionData> softParticleParams {};
        std::shared_ptr<yordle::data::meta::VfxAlphaErosionDefinitionData> alphaErosionDefinition {};
        std::shared_ptr<yordle::data::meta::VfxPaletteDefinitionData> paletteDefinition {};
        std::shared_ptr<yordle::data::meta::VfxReflectionDefinitionData> reflectionDefinition {};
        std::shared_ptr<yordle::data::meta::VfxDistortionDefinitionData> distortionDefinition {};
        std::shared_ptr<yordle::data::meta::VfxEmissionSurfaceData> emissionSurfaceDefinition {};
        std::shared_ptr<yordle::data::meta::VfxPrimitiveBase> primitive {};
        int16_t pass = 0;
        uint8_t miscRenderFlags = 0u;
        uint8_t meshRenderFlags = 1u;
        uint8_t colorRenderFlags = 0u;
        uint8_t stencilMode = 0u;
        uint8_t stencilRef = 0u;
        uint8_t alphaRef = 5u;
        std::array<float, 2> depthBiasFactors { 0.0f, 0.0f };
        float sliceTechniqueRange = 0.0f;
        std::array<float, 2> texDiv { 1.0f, 1.0f };
        std::array<float, 2> texDivMult { 1.0f, 1.0f };
        std::string texture {};
        std::string textureMult {};
        std::string particleColorTexture = "ASSETS/Shared/Particles/DefaultColorOverlifetime.dds";
        std::string falloffTexture = "ASSETS/Shared/Particles/DefaultFalloff.DDS";
        uint8_t texAddressModeMult = 0u;
        uint8_t uvMode = 0u;
        uint8_t colorLookUpTypeX = 1u;
        uint8_t colorLookUpTypeY = 0u;
        std::array<float, 2> colorLookUpScales { 1.0f, 1.0f };
        std::array<float, 2> colorLookUpOffsets { 0.0f, 0.0f };
        std::array<float, 4> modulationFactor { 1.0f, 1.0f, 1.0f, 1.0f };
        float scaleBirthScaleByBoundObjectSize = 0.0f;
        float scaleBirthScaleByBoundObjectHeight = 0.0f;
        float scaleBirthScaleByBoundObjectRadius = 0.0f;
        std::vector<std::string> keywordsExcluded {};
        std::vector<std::string> keywordsRequired {};
        std::vector<std::string> keywordsIncluded {};
        uint8_t importance = 1u;
        uint8_t censorPolicy = 0u;
        uint8_t spectatorPolicy = 0u;
        uint8_t particleLingerType = 0u;
        std::shared_ptr<yordle::data::meta::ValueFloat> particleLifetime {};
        std::optional<float> lifetime {};
        std::shared_ptr<yordle::data::meta::FlexValueFloat> flexParticleLifetime {};
        std::optional<float> particleLinger { 0.0f };
        std::optional<float> emitterLinger { 0.0f };
        std::shared_ptr<yordle::data::meta::ValueVector3> birthVelocity {};
        std::shared_ptr<yordle::data::meta::FlexValueVector3> flexBirthVelocity {};
        std::shared_ptr<yordle::data::meta::FlexTypeFloat> flexScaleBirthScale {};
        std::shared_ptr<yordle::data::meta::FlexValueVector2> flexBirthUVScrollRate {};
        std::shared_ptr<yordle::data::meta::FlexValueVector2> flexBirthUVScrollRateMult {};
        std::shared_ptr<yordle::data::meta::ValueColor> birthColor {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthAcceleration {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthRotationalAcceleration {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthDrag {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthOrbitalVelocity {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthFrameRate {};
        std::shared_ptr<yordle::data::meta::ValueVector2> birthUVOffset {};
        std::shared_ptr<yordle::data::meta::ValueVector2> birthUVOffsetMult {};
        std::shared_ptr<yordle::data::meta::FlexValueVector2> flexBirthUVOffset {};
        std::shared_ptr<yordle::data::meta::ValueFloat> rate {};
        std::shared_ptr<yordle::data::meta::ValueVector2> rateByVelocityFunction {};
        std::optional<float> MaximumRateByVelocity {};
        std::shared_ptr<yordle::data::meta::FlexValueFloat> flexRate {};
        float timeBeforeFirstEmission = 0.0f;
        float xcef2ba70 = 0.0f;
        std::optional<float> timeActiveDuringPeriod {};
        std::optional<float> period {};
        std::shared_ptr<yordle::data::meta::VfxShape> shape {};
        std::shared_ptr<yordle::data::meta::xb13097f0> x4ffce322 {};
        std::shared_ptr<yordle::data::meta::FlexValueVector3> flexOffset {};
        int16_t startFrame = 0u;
        int16_t numFrames = 1u;
        float frameRate = 0.0f;
        std::string soundOnCreateName {};
        std::string voiceOverOnCreateName {};
        std::string soundPersistentName {};
        std::string voiceOverPersistentName {};
        std::array<float, 4> censorModulateValue { 1.0f, 1.0f, 1.0f, 1.0f };
        std::string emissionMeshName {};
        std::array<float, 3> offsetLifetimeScaling { 0.0f, 0.0f, 0.0f };
        std::array<float, 2> emitterUvScrollRate { 0.0f, 0.0f };
        std::array<float, 2> emitterUvScrollRateMult { 0.0f, 0.0f };
        std::array<float, 3> translationOverride { 0.0f, 0.0f, 0.0f };
        std::array<float, 3> rotationOverride { 0.0f, 0.0f, 0.0f };
        std::array<float, 3> scaleOverride { 1.0f, 1.0f, 1.0f };
        std::shared_ptr<yordle::data::meta::FlexTypeFloat> FlexInstanceScale {};
        bool isRandomStartFrameMult = true;
        bool isUniformScale = true;
        bool particleIsLocalOrientation = false;
        bool doesCastShadow = true;
        bool isDirectionOriented = false;
        bool isRandomStartFrame = true;
        bool uvScrollAlphaMult = false;
        bool hasPostRotateOrientation = true;
        bool isGroundLayer = false;
        bool x676949a1 = false;
        bool uvScrollClampMult = false;
        bool useEmissionMeshNormalForBirth = false;
        bool isRotationEnabled = false;
        bool uvScrollClamp = false;
        bool isFollowingTerrain = false;
        bool useNavmeshMask = false;
        bool isLocalOrientation = false;
        bool hasFixedOrbit = false;
        bool isSingleParticle = false;
        bool x538effa4 = false;
        bool UseLingerScale = false;
        bool lockedToEmitter = false;
        bool xbd9b83c7 = false;
        bool UseLingerRotation = false;
        bool doesParticleLifetimeScale = false;
        bool useLingerColor = false;
        bool UseLingerVelocity = false;
        bool x51af37d2 = false;
        bool doesLifetimeScale = false;
        bool UseLingerDrag = false;
        bool UseLingerAcceleration = false;
        bool scaleUpFromOrigin = false;
        std::array<float, 3> postRotateOrientationAxis { 0.0f, 0.0f, 0.0f };
        std::shared_ptr<yordle::data::meta::ValueVector2> birthUvScrollRate {};
        std::shared_ptr<yordle::data::meta::ValueVector2> birthUvScrollRateMult {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthUvRotateRate {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthUvRotateRateMult {};
        std::shared_ptr<yordle::data::meta::ValueFloat> uvRotation {};
        std::shared_ptr<yordle::data::meta::ValueFloat> x33b8543e {};
        std::shared_ptr<yordle::data::meta::IntegratedValueVector2> particleUVScrollRate {};
        std::shared_ptr<yordle::data::meta::IntegratedValueVector2> particleUVScrollRateMult {};
        std::shared_ptr<yordle::data::meta::IntegratedValueFloat> particleUVRotateRate {};
        std::shared_ptr<yordle::data::meta::IntegratedValueFloat> particleUVRotateRateMult {};
        float directionVelocityScale = 0.0f;
        float directionVelocityMinScale = 1.0f;
        float uvParallaxScale = 0.0f;
        std::shared_ptr<yordle::data::meta::ValueVector3> velocity {};
        std::shared_ptr<yordle::data::meta::ValueVector3> acceleration {};
        std::shared_ptr<yordle::data::meta::IntegratedValueVector3> worldAcceleration {};
        std::shared_ptr<yordle::data::meta::ValueColor> color {};
        std::shared_ptr<yordle::data::meta::ValueFloat> bindWeight {};
        std::shared_ptr<yordle::data::meta::ValueVector3> drag {};
        std::shared_ptr<yordle::data::meta::ValueVector3> lingerVelocity {};
        std::shared_ptr<yordle::data::meta::ValueVector3> lingerAcceleration {};
        std::shared_ptr<yordle::data::meta::ValueColor> lingerColor {};
        std::shared_ptr<yordle::data::meta::ValueVector3> lingerDrag {};
        std::shared_ptr<yordle::data::meta::VfxChildParticleSetDefinitionData> childParticleSetDefinition {};
        float emissionMeshScale = 1.0f;
        uint8_t texAddressModeBase = 0u;
        uint8_t fixedOrbitType = 1u;
        uint8_t orientation = 0u;
        bool x2bf854fb = false;
        bool x2cf8568e = false;
        bool x38b0b8cc = false;
        bool x3bb0bd85 = false;
        std::array<float, 2> particleBind { 0.0f, 0.0f };
        std::array<float, 2> scaleBias { 1.0f, 1.0f };
        std::shared_ptr<yordle::data::meta::ValueVector3> birthRotation0 {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthScale0 {};
        std::shared_ptr<yordle::data::meta::ValueVector3> birthRotationalVelocity0 {};
        std::shared_ptr<yordle::data::meta::FlexValueVector3> flexBirthRotationalVelocity0 {};
        std::shared_ptr<yordle::data::meta::ValueVector3> scale0 {};
        std::shared_ptr<yordle::data::meta::IntegratedValueVector3> rotation0 {};
        std::shared_ptr<yordle::data::meta::ValueVector2> uvScale {};
        std::shared_ptr<yordle::data::meta::ValueVector2> uvScaleMult {};
        std::array<float, 2> uvTransformCenter { 0.5f, 0.5f };
        std::array<float, 2> uvTransformCenterMult { 0.5f, 0.5f };
        std::shared_ptr<yordle::data::meta::ValueVector3> LingerRotation0 {};
        std::shared_ptr<yordle::data::meta::ValueVector3> LingerScale0 {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthRotation1 {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthScale1 {};
        std::shared_ptr<yordle::data::meta::ValueFloat> birthRotationalVelocity1 {};
        std::shared_ptr<yordle::data::meta::FlexValueFloat> flexBirthRotationalVelocity1 {};
        std::array<float, 2> uvScrollRate1 { 0.0f, 0.0f };
        std::shared_ptr<yordle::data::meta::ValueFloat> scale1 {};
        std::shared_ptr<yordle::data::meta::ValueFloat> rotation1 {};
    };
}
#define YORDLE_META_DEF_VfxEmitterDefinitionData
#endif
