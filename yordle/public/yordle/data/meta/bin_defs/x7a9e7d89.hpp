/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7a9e7d89
#pragma once

#include <memory>
#include <vector>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ICastRequirement
    struct ICastRequirement;
#endif
    struct YORDLE_EXPORT x7a9e7d89 : public bin_class {
        explicit x7a9e7d89(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2057207177u;
        }

        float x55205acb = 0.0f;
        std::vector<std::shared_ptr<yordle::data::meta::ICastRequirement>> x166d5141 {};
        std::vector<std::shared_ptr<yordle::data::meta::ICastRequirement>> x175e6650 {};
        bool xda83e690 = false;
        uint32_t mAffectsTypeOverride = 0u;
        uint32_t mAffectsStatusOverride = 0u;
    };
}
#define YORDLE_META_DEF_x7a9e7d89
#endif
