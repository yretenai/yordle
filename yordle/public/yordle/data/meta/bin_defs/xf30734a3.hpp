/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf30734a3
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/x682de9e7.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x682de9e7
    struct x682de9e7;
#endif
    struct YORDLE_EXPORT xf30734a3 : public bin_class {
        explicit xf30734a3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4077335715u;
        }

        yordle::data::meta::bin_fnv_hash x5d13c4eb = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::x682de9e7>> x2a9bbd14 {};
    };
}
#define YORDLE_META_DEF_xf30734a3
#endif
