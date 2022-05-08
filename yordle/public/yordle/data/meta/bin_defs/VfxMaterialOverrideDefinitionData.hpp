/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxMaterialOverrideDefinitionData
#pragma once

#include <memory>
#include <cstdint>
#include <optional>
#include <string>

#include <yordle/data/meta/bin_defs/IMaterialDef.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IMaterialDef
    struct IMaterialDef;
#endif
    struct YORDLE_EXPORT VfxMaterialOverrideDefinitionData : public bin_class {
        explicit VfxMaterialOverrideDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3652726407u;
        }

        int32_t priority = 0;
        std::optional<std::string> subMeshName {};
        uint32_t overrideBlendMode = 0u;
        std::string baseTexture {};
        std::string glossTexture {};
        std::string transitionTexture {};
        float transitionSample = 0.0f;
        uint32_t transitionSource = 0u;
        yordle::data::meta::bin_ref<yordle::data::meta::IMaterialDef> material { 3975636772 };
    };
}
#define YORDLE_META_DEF_VfxMaterialOverrideDefinitionData
#endif
