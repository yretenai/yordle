/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_LaneData
#pragma once

#include <memory>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT LaneData : public bin_class {
        explicit LaneData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 243000503u;
        }

        std::vector<std::string> mNavigationPoints {};
        std::vector<std::string> mContainedRegions {};
    };
}
#define YORDLE_META_DEF_LaneData
#endif