/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LoadoutFeatureData
#pragma once

#include <memory>
#include <cstdint>
#include <optional>
#include <string>
#include <vector>
#include <map>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT LoadoutFeatureData : public bin_class {
        explicit LoadoutFeatureData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3930402607u;
        }

        uint32_t mFeature = 15u;
        std::optional<std::string> mMutator {};
        std::optional<std::string> mBinaryFile {};
        std::string mLoadoutCategory {};
        std::vector<std::string> mLoadoutProperties {};
        std::map<std::string, std::string> mGDSObjectPathTemplates {};
        bool mLoadFromContentIds = true;
    };
}
#define YORDLE_META_DEF_LoadoutFeatureData
#endif
