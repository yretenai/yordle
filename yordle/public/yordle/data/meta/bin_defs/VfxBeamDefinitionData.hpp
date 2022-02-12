/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxBeamDefinitionData
#pragma once

#include <memory>
#include <cstdint>
#include <array>

#include <yordle/data/meta/bin_defs/ValueVector3.hpp>
#include <yordle/data/meta/bin_defs/ValueColor.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ValueVector3
    struct ValueVector3;
#endif

#ifndef YORDLE_META_DEF_ValueColor
    struct ValueColor;
#endif
    struct YORDLE_EXPORT VfxBeamDefinitionData : public bin_class {
        explicit VfxBeamDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 532209417u;
        }

        std::shared_ptr<yordle::data::meta::ValueVector3> mBirthTilingSize {};
        uint8_t mMode = 0u;
        uint8_t mTrailMode = 0u;
        int32_t mSegments = 0;
        std::array<float, 3> mLocalSpaceSourceOffset { 0, 0, 0 };
        std::array<float, 3> mLocalSpaceTargetOffset { 0, 0, 0 };
        bool mIsColorBindedWithDistance = false;
        std::shared_ptr<yordle::data::meta::ValueColor> mAnimatedColorWithDistance {};
    };
}
#define YORDLE_META_DEF_VfxBeamDefinitionData
#endif
