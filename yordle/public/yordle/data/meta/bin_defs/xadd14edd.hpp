/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xadd14edd
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xadd14edd : public bin_class {
        explicit xadd14edd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2916175581u;
        }

        yordle::data::meta::bin_fnv_hash Icon = 0u;
        yordle::data::meta::bin_fnv_hash Region = 0u;
    };
}
#define YORDLE_META_DEF_xadd14edd
#endif
