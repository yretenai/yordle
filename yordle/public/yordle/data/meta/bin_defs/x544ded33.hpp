/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x544ded33
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x5c086dbd.hpp>
#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x5c086dbd
    struct x5c086dbd;
#endif
    struct YORDLE_EXPORT x544ded33 : public x1c494c09 {
        explicit x544ded33(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1414393139u || x1c494c09::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x5c086dbd> xb8c60cba {};
    };
}
#define YORDLE_META_DEF_x544ded33
#endif
