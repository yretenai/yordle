/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xbbc6d7f5
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xbbc6d7f5 : public bin_class {
        explicit xbbc6d7f5(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3150370805u;
        }

        yordle::data::meta::bin_fnv_hash xef2cd5bb = 0u;
    };
}
#define YORDLE_META_DEF_xbbc6d7f5
#endif
