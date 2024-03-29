/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_IdentityInstance
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT IdentityInstance : public bin_class {
        explicit IdentityInstance(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1790162312u;
        }

        std::string mItemTexturePath {};
        std::string id {};
        yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData> x8142856e { 1171098015 };
    };
}
#define YORDLE_META_DEF_IdentityInstance
#endif
