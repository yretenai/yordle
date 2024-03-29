/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxMeshDefinitionData
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VfxMeshDefinitionData : public bin_class {
        explicit VfxMeshDefinitionData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1787328523u;
        }

        std::string mMeshName {};
        std::string mMeshSkeletonName {};
        std::string mSimpleMeshName {};
        std::vector<yordle::data::meta::bin_fnv_hash> mSubmeshesToDraw {};
        std::vector<yordle::data::meta::bin_fnv_hash> mSubmeshesToDrawAlways {};
        bool mLockMeshToAttachment = false;
        std::string mAnimationName {};
        std::vector<std::string> mAnimationVariants {};
    };
}
#define YORDLE_META_DEF_VfxMeshDefinitionData
#endif
