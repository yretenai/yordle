/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1b906cbf
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x1b906cbf : public bin_class {
        explicit x1b906cbf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 462449855u;
        }

        yordle::data::meta::bin_fnv_hash Group = 0u;
        yordle::data::meta::bin_fnv_hash x500ae933 = 0u;
    };
}
#define YORDLE_META_DEF_x1b906cbf
#endif
