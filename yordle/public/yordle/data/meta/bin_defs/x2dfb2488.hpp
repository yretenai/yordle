/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2dfb2488
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x15793a8c.hpp>
#include <yordle/data/meta/bin_defs/xa5f32abe.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x15793a8c
    struct x15793a8c;
#endif
    struct YORDLE_EXPORT x2dfb2488 : public xa5f32abe {
        explicit x2dfb2488(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 771433608u || xa5f32abe::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x15793a8c> xc43e335a {};
    };
}
#define YORDLE_META_DEF_x2dfb2488
#endif