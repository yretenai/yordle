/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xa847e0a9
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x57c67d10.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xa847e0a9 : public x57c67d10 {
        explicit xa847e0a9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2823282857u || x57c67d10::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_xa847e0a9
#endif