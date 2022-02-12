/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TFTCompanionBucket
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TFTCompanionBucket : public bin_class {
        explicit TFTCompanionBucket(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4009991563u;
        }

        std::vector<yordle::data::meta::bin_fnv_hash> companions {};
    };
}
#define YORDLE_META_DEF_TFTCompanionBucket
#endif