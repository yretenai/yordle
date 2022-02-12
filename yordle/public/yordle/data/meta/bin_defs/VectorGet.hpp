/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VectorGet
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/IVectorGet.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VectorGet : public IVectorGet {
        explicit VectorGet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1755899118u || IVectorGet::is_type(type);
        }

        std::array<float, 3> value { 0, 0, 0 };
    };
}
#define YORDLE_META_DEF_VectorGet
#endif
