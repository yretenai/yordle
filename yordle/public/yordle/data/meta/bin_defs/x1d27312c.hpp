/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x1d27312c
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x1d27312c : public bin_class {
        explicit x1d27312c(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 489107756u;
        }

        yordle::data::meta::bin_xx_hash x81cd26c4 = 0u;
        yordle::data::meta::bin_xx_hash x6583bc71 = 0u;
    };
}
#define YORDLE_META_DEF_x1d27312c
#endif
