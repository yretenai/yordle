/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x32c5fd80
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x32c5fd80 : public bin_class {
        explicit x32c5fd80(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 851836288u;
        }

        yordle::data::meta::bin_fnv_hash x5c05f04d = 0u;
    };
}
#define YORDLE_META_DEF_x32c5fd80
#endif
