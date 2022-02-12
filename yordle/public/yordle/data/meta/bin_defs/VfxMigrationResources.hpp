/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxMigrationResources
#pragma once

#include <memory>
#include <map>

#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT VfxMigrationResources : public bin_class {
        explicit VfxMigrationResources(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2184800742u;
        }

        std::map<yordle::data::meta::bin_fnv_hash, yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData>> resourceMap {};
    };
}
#define YORDLE_META_DEF_VfxMigrationResources
#endif
