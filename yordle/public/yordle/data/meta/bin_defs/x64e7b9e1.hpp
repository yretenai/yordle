/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x64e7b9e1
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xa24429bf.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x64e7b9e1 : public xa24429bf {
        explicit x64e7b9e1(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1692908001u || xa24429bf::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xe145ee5d = 0u;
    };
}
#define YORDLE_META_DEF_x64e7b9e1
#endif
