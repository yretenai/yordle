/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x9c8ade94
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xa4ef6883.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x9c8ade94 : public xa4ef6883 {
        explicit x9c8ade94(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2626346644u || xa4ef6883::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x9c8ade94
#endif
