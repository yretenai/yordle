/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_StaticMaterialDef
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <vector>
#include <map>

#include <yordle/data/meta/bin_defs/StaticMaterialShaderSamplerDef.hpp>
#include <yordle/data/meta/bin_defs/StaticMaterialShaderParamDef.hpp>
#include <yordle/data/meta/bin_defs/StaticMaterialSwitchDef.hpp>
#include <yordle/data/meta/bin_defs/StaticMaterialTechniqueDef.hpp>
#include <yordle/data/meta/bin_defs/StaticMaterialChildTechniqueDef.hpp>
#include <yordle/data/meta/bin_defs/DynamicMaterialDef.hpp>
#include <yordle/data/meta/bin_defs/IResource.hpp>
#include <yordle/data/meta/bin_defs/IMaterialDef.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_StaticMaterialShaderSamplerDef
    struct StaticMaterialShaderSamplerDef;
#endif

#ifndef YORDLE_META_DEF_StaticMaterialShaderParamDef
    struct StaticMaterialShaderParamDef;
#endif

#ifndef YORDLE_META_DEF_StaticMaterialSwitchDef
    struct StaticMaterialSwitchDef;
#endif

#ifndef YORDLE_META_DEF_StaticMaterialTechniqueDef
    struct StaticMaterialTechniqueDef;
#endif

#ifndef YORDLE_META_DEF_StaticMaterialChildTechniqueDef
    struct StaticMaterialChildTechniqueDef;
#endif

#ifndef YORDLE_META_DEF_DynamicMaterialDef
    struct DynamicMaterialDef;
#endif
    struct YORDLE_EXPORT StaticMaterialDef : public IResource, public IMaterialDef {
        explicit StaticMaterialDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4288492553u || IResource::is_type(type)|| IMaterialDef::is_type(type);
        }

        std::string name {};
        uint32_t type = 1u;
        std::string defaultTechnique {};
        std::vector<std::shared_ptr<yordle::data::meta::StaticMaterialShaderSamplerDef>> samplerValues {};
        std::vector<std::shared_ptr<yordle::data::meta::StaticMaterialShaderParamDef>> paramValues {};
        std::vector<std::shared_ptr<yordle::data::meta::StaticMaterialSwitchDef>> switches {};
        std::map<std::string, std::string> shaderMacros {};
        std::vector<std::shared_ptr<yordle::data::meta::StaticMaterialTechniqueDef>> techniques {};
        std::vector<std::shared_ptr<yordle::data::meta::StaticMaterialChildTechniqueDef>> childTechniques {};
        std::shared_ptr<yordle::data::meta::DynamicMaterialDef> dynamicMaterial {};
    };
}
#define YORDLE_META_DEF_StaticMaterialDef
#endif