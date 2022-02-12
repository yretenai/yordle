/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb5d136db
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/AtlasDataBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb5d136db : public AtlasDataBase {
        explicit xb5d136db(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3050387163u || AtlasDataBase::is_type(type);
        }

        std::array<float, 4> TextureUs { 0, 0.25, 0.75, 1 };
        std::array<float, 2> TextureVs { 0, 1 };
        std::array<float, 2> x1b57cc27 { 0.25, 0.25 };
    };
}
#define YORDLE_META_DEF_xb5d136db
#endif
