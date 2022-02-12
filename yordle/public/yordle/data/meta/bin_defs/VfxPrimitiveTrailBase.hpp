/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxPrimitiveTrailBase
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VfxTrailDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxTrailDefinitionData
    struct VfxTrailDefinitionData;
#endif
    struct YORDLE_EXPORT VfxPrimitiveTrailBase : public VfxPrimitiveBase {
        explicit VfxPrimitiveTrailBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 562397581u || VfxPrimitiveBase::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VfxTrailDefinitionData> mTrail {};
    };
}
#define YORDLE_META_DEF_VfxPrimitiveTrailBase
#endif