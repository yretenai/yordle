/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6ce97639
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xd1951f45.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6ce97639 : public xd1951f45 {
        explicit x6ce97639(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1827239481u || xd1951f45::is_type(type);
        }

        uint8_t Edge = 0u;
    };
}
#define YORDLE_META_DEF_x6ce97639
#endif
