/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4926ae3e
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionTemplate.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4926ae3e : public IOptionTemplate {
        explicit x4926ae3e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1227271742u || IOptionTemplate::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash buttonDefinition = 0u;
        yordle::data::meta::bin_fnv_hash xce3c3e2c = 0u;
    };
}
#define YORDLE_META_DEF_x4926ae3e
#endif
