/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6d6cc142
#pragma once

#include <memory>
#include <map>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6d6cc142 : public bin_class {
        explicit x6d6cc142(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1835843906u;
        }

        yordle::data::meta::bin_fnv_hash x3ca16daf = 0u;
        yordle::data::meta::bin_fnv_hash xbe8b277c = 0u;
        yordle::data::meta::bin_fnv_hash x6eab4784 = 0u;
        std::map<std::string, yordle::data::meta::bin_fnv_hash> xb80b3198 {};
    };
}
#define YORDLE_META_DEF_x6d6cc142
#endif
