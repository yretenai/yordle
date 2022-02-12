/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>

#include <yordle/data/meta/bin_defs/VfxMaterialOverrideDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxEmitterDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxAssetRemap.hpp>
#include <yordle/data/meta/bin_defs/IResource.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::VfxSystemDefinitionData::VfxSystemDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IResource(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_materialOverrideDefinitions = prop->cast_prop<yordle::data::prop::set_prop>(858467462u);
    if(ptr_materialOverrideDefinitions != nullptr) {
        for(const auto &set_materialOverrideDefinitions_entry : ptr_materialOverrideDefinitions->value) {
            auto ptr_materialOverrideDefinitions_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_materialOverrideDefinitions_entry);
            if(ptr_materialOverrideDefinitions_entry != nullptr) {
                materialOverrideDefinitions.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::VfxMaterialOverrideDefinitionData>(ptr_materialOverrideDefinitions_entry, 3652726407u));
            }
        }
    }

    auto ptr_complexEmitterDefinitionData = prop->cast_prop<yordle::data::prop::set_prop>(2257500010u);
    if(ptr_complexEmitterDefinitionData != nullptr) {
        for(const auto &set_complexEmitterDefinitionData_entry : ptr_complexEmitterDefinitionData->value) {
            auto ptr_complexEmitterDefinitionData_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_complexEmitterDefinitionData_entry);
            if(ptr_complexEmitterDefinitionData_entry != nullptr) {
                complexEmitterDefinitionData.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::VfxEmitterDefinitionData>(ptr_complexEmitterDefinitionData_entry, 164488258u));
            }
        }
    }

    auto ptr_simpleEmitterDefinitionData = prop->cast_prop<yordle::data::prop::set_prop>(1736566626u);
    if(ptr_simpleEmitterDefinitionData != nullptr) {
        for(const auto &set_simpleEmitterDefinitionData_entry : ptr_simpleEmitterDefinitionData->value) {
            auto ptr_simpleEmitterDefinitionData_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_simpleEmitterDefinitionData_entry);
            if(ptr_simpleEmitterDefinitionData_entry != nullptr) {
                simpleEmitterDefinitionData.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::VfxEmitterDefinitionData>(ptr_simpleEmitterDefinitionData_entry, 164488258u));
            }
        }
    }

    auto ptr_visibilityRadius = prop->cast_prop<yordle::data::prop::float32_prop>(4244744659u);
    if(ptr_visibilityRadius != nullptr) {
        visibilityRadius = ptr_visibilityRadius->value;
    }

    auto ptr_particleName = prop->cast_prop<yordle::data::prop::string_prop>(3975268028u);
    if(ptr_particleName != nullptr) {
        particleName = ptr_particleName->value;
    }

    auto ptr_particlePath = prop->cast_prop<yordle::data::prop::string_prop>(3882058040u);
    if(ptr_particlePath != nullptr) {
        particlePath = ptr_particlePath->value;
    }

    auto ptr_overrideScaleCap = prop->cast_prop<yordle::data::prop::optional_prop>(984499975u);
    if(ptr_overrideScaleCap != nullptr) {
        auto ptr_overrideScaleCap_opt = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(ptr_overrideScaleCap->value);
        if (ptr_overrideScaleCap_opt != nullptr) {
            overrideScaleCap = ptr_overrideScaleCap_opt->value;
        }
    }

    auto ptr_soundOnCreateDefault = prop->cast_prop<yordle::data::prop::string_prop>(3770906030u);
    if(ptr_soundOnCreateDefault != nullptr) {
        soundOnCreateDefault = ptr_soundOnCreateDefault->value;
    }

    auto ptr_voiceOverOnCreateDefault = prop->cast_prop<yordle::data::prop::string_prop>(1291847151u);
    if(ptr_voiceOverOnCreateDefault != nullptr) {
        voiceOverOnCreateDefault = ptr_voiceOverOnCreateDefault->value;
    }

    auto ptr_soundPersistentDefault = prop->cast_prop<yordle::data::prop::string_prop>(1516925922u);
    if(ptr_soundPersistentDefault != nullptr) {
        soundPersistentDefault = ptr_soundPersistentDefault->value;
    }

    auto ptr_voiceOverPersistentDefault = prop->cast_prop<yordle::data::prop::string_prop>(3733702107u);
    if(ptr_voiceOverPersistentDefault != nullptr) {
        voiceOverPersistentDefault = ptr_voiceOverPersistentDefault->value;
    }

    auto ptr_assetCategory = prop->cast_prop<yordle::data::prop::string_prop>(829774143u);
    if(ptr_assetCategory != nullptr) {
        assetCategory = ptr_assetCategory->value;
    }

    auto ptr_audioParameterFlexID = prop->cast_prop<yordle::data::prop::int32_prop>(1500211774u);
    if(ptr_audioParameterFlexID != nullptr) {
        audioParameterFlexID = ptr_audioParameterFlexID->value;
    }

    auto ptr_audioParameterTimeScaledDuration = prop->cast_prop<yordle::data::prop::float32_prop>(2709890627u);
    if(ptr_audioParameterTimeScaledDuration != nullptr) {
        audioParameterTimeScaledDuration = ptr_audioParameterTimeScaledDuration->value;
    }

    auto ptr_drawingLayer = prop->cast_prop<yordle::data::prop::uint8_prop>(3355691510u);
    if(ptr_drawingLayer != nullptr) {
        drawingLayer = ptr_drawingLayer->value;
    }

    auto ptr_xa301c4a7 = prop->cast_prop<yordle::data::prop::uint8_prop>(2734802087u);
    if(ptr_xa301c4a7 != nullptr) {
        xa301c4a7 = ptr_xa301c4a7->value;
    }

    auto ptr_flags = prop->cast_prop<yordle::data::prop::uint8_prop>(2624027180u);
    if(ptr_flags != nullptr) {
        flags = ptr_flags->value;
    }

    auto ptr_buildUpTime = prop->cast_prop<yordle::data::prop::float32_prop>(3918823439u);
    if(ptr_buildUpTime != nullptr) {
        buildUpTime = ptr_buildUpTime->value;
    }

    auto ptr_selfIllumination = prop->cast_prop<yordle::data::prop::float32_prop>(623863940u);
    if(ptr_selfIllumination != nullptr) {
        selfIllumination = ptr_selfIllumination->value;
    }

    auto ptr_assetRemappingTable = prop->cast_prop<yordle::data::prop::set_prop>(3491373088u);
    if(ptr_assetRemappingTable != nullptr) {
        for(const auto &set_assetRemappingTable_entry : ptr_assetRemappingTable->value) {
            auto ptr_assetRemappingTable_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_assetRemappingTable_entry);
            if(ptr_assetRemappingTable_entry != nullptr) {
                assetRemappingTable.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::VfxAssetRemap>(ptr_assetRemappingTable_entry, 4129808802u));
            }
        }
    }

    auto ptr_Transform = prop->cast_prop<yordle::data::prop::matrix_prop>(3786248987u);
    if(ptr_Transform != nullptr) {
        Transform = ptr_Transform->value;
    }

    auto ptr_hudLayerDimension = prop->cast_prop<yordle::data::prop::float32_prop>(4148591245u);
    if(ptr_hudLayerDimension != nullptr) {
        hudLayerDimension = ptr_hudLayerDimension->value;
    }

    auto ptr_HudLayerAspect = prop->cast_prop<yordle::data::prop::float32_prop>(3180870615u);
    if(ptr_HudLayerAspect != nullptr) {
        HudLayerAspect = ptr_HudLayerAspect->value;
    }

    auto ptr_hudAnchorPositionFromWorldProjection = prop->cast_prop<yordle::data::prop::bool_prop>(3696942245u);
    if(ptr_hudAnchorPositionFromWorldProjection != nullptr) {
        hudAnchorPositionFromWorldProjection = ptr_hudAnchorPositionFromWorldProjection->value;
    }

    auto ptr_scaleDynamicallyWithAttachedBone = prop->cast_prop<yordle::data::prop::bool_prop>(4116583538u);
    if(ptr_scaleDynamicallyWithAttachedBone != nullptr) {
        scaleDynamicallyWithAttachedBone = ptr_scaleDynamicallyWithAttachedBone->value;
    }

    auto ptr_mEyeCandy = prop->cast_prop<yordle::data::prop::bool_prop>(1915866710u);
    if(ptr_mEyeCandy != nullptr) {
        mEyeCandy = ptr_mEyeCandy->value;
    }

    auto ptr_xcf08f8e6 = prop->cast_prop<yordle::data::prop::bool_prop>(3473471718u);
    if(ptr_xcf08f8e6 != nullptr) {
        xcf08f8e6 = ptr_xcf08f8e6->value;
    }
}