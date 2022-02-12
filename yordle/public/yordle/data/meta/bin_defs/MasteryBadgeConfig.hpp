/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MasteryBadgeConfig
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/MasteryBadgeData.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MasteryBadgeData
    struct MasteryBadgeData;
#endif
    struct YORDLE_EXPORT MasteryBadgeConfig : public bin_class {
        explicit MasteryBadgeConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4114078183u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::MasteryBadgeData>> mBadges {};
    };
}
#define YORDLE_META_DEF_MasteryBadgeConfig
#endif
