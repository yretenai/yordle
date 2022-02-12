/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxPrimitiveProjectionBase
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VfxProjectionDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxProjectionDefinitionData
    struct VfxProjectionDefinitionData;
#endif
    struct YORDLE_EXPORT VfxPrimitiveProjectionBase : public VfxPrimitiveBase {
        explicit VfxPrimitiveProjectionBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3832843140u || VfxPrimitiveBase::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VfxProjectionDefinitionData> mProjection {};
    };
}
#define YORDLE_META_DEF_VfxPrimitiveProjectionBase
#endif