/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x703acc15
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1650a0ab.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x703acc15 : public x1650a0ab {
        explicit x703acc15(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1882901525u || x1650a0ab::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_x703acc15
#endif
