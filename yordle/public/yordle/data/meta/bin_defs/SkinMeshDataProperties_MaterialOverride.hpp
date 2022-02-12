/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SkinMeshDataProperties_MaterialOverride
#pragma once

#include <memory>
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
    struct YORDLE_EXPORT SkinMeshDataProperties_MaterialOverride : public bin_class {
        explicit SkinMeshDataProperties_MaterialOverride(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2340045716u;
        }

        yordle::data::meta::bin_ref<yordle::data::meta::IMaterialDef> material { 3975636772 };
        std::string texture {};
        std::string glossTexture {};
        std::string Submesh {};
    };
}
#define YORDLE_META_DEF_SkinMeshDataProperties_MaterialOverride
#endif