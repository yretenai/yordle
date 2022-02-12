/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GlobalPerLevelStatsFactor
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT GlobalPerLevelStatsFactor : public bin_class {
        explicit GlobalPerLevelStatsFactor(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1907548119u;
        }

        std::vector<float> mPerLevelStatsFactor {};
    };
}
#define YORDLE_META_DEF_GlobalPerLevelStatsFactor
#endif
