/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcbdadf65
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcbdadf65 : public bin_class {
        explicit xcbdadf65(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3420118885u;
        }

        yordle::data::meta::bin_fnv_hash x4d302530 = 0u;
        std::vector<yordle::data::meta::bin_fnv_hash> x9097411f {};
        yordle::data::meta::bin_fnv_hash HitRegion = 0u;
    };
}
#define YORDLE_META_DEF_xcbdadf65
#endif