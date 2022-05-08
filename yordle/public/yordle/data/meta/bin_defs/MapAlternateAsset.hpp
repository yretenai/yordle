/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapAlternateAsset
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_defs/ResourceResolver.hpp>
#include <yordle/data/meta/bin_defs/BankUnit.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ResourceResolver
    struct ResourceResolver;
#endif

#ifndef YORDLE_META_DEF_BankUnit
    struct BankUnit;
#endif
    struct YORDLE_EXPORT MapAlternateAsset : public bin_class {
        explicit MapAlternateAsset(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3846963535u;
        }

        std::string mGrassTintTextureName {};
        std::string x603134b8 {};
        std::string x198716d9 {};
        yordle::data::meta::bin_ref<yordle::data::meta::ResourceResolver> mParticleResourceResolver { 4013559603 };
        yordle::data::meta::bin_fnv_hash x97472c4d = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::BankUnit>> AudioBankUnits {};
    };
}
#define YORDLE_META_DEF_MapAlternateAsset
#endif
