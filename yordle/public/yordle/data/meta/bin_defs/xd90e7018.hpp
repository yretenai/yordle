/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd90e7018
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd90e7018 : public IOptionItemFilter {
        explicit xd90e7018(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3641602072u || IOptionItemFilter::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Map = 0u;
    };
}
#define YORDLE_META_DEF_xd90e7018
#endif
