/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb1c7f3d2
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/x48eb8d47.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb1c7f3d2 : public x48eb8d47 {
        explicit xb1c7f3d2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2982671314u || x48eb8d47::is_type(type);
        }

        int32_t xbd51112a = 1;
    };
}
#define YORDLE_META_DEF_xb1c7f3d2
#endif