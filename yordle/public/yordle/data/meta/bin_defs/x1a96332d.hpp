/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1a96332d
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x1a96332d : public bin_class {
        explicit x1a96332d(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 446051117u;
        }

        std::vector<yordle::data::meta::bin_fnv_hash> x6c4f9aa5 {};
        std::vector<yordle::data::meta::bin_fnv_hash> x46fd893f {};
    };
}
#define YORDLE_META_DEF_x1a96332d
#endif
