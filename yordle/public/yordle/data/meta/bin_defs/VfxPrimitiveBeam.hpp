/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxPrimitiveBeam
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VfxBeamDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxMeshDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxBeamDefinitionData
    struct VfxBeamDefinitionData;
#endif

#ifndef YORDLE_META_DEF_VfxMeshDefinitionData
    struct VfxMeshDefinitionData;
#endif
    struct YORDLE_EXPORT VfxPrimitiveBeam : public VfxPrimitiveBase {
        explicit VfxPrimitiveBeam(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1752512115u || VfxPrimitiveBase::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::VfxBeamDefinitionData> mBeam {};
        std::shared_ptr<yordle::data::meta::VfxMeshDefinitionData> mMesh {};
    };
}
#define YORDLE_META_DEF_VfxPrimitiveBeam
#endif
