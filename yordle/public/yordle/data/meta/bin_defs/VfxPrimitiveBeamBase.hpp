/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxPrimitiveBeamBase
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VfxBeamDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxBeamDefinitionData
    struct VfxBeamDefinitionData;
#endif
    struct YORDLE_EXPORT VfxPrimitiveBeamBase : public VfxPrimitiveBase {
        explicit VfxPrimitiveBeamBase(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3713591166u || VfxPrimitiveBase::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VfxBeamDefinitionData> mBeam {};
    };
}
#define YORDLE_META_DEF_VfxPrimitiveBeamBase
#endif
