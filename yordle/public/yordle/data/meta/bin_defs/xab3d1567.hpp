/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xab3d1567
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/AtlasDataBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xab3d1567 : public AtlasDataBase {
        explicit xab3d1567(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2872907111u || AtlasDataBase::is_type(type);
        }

        std::array<float, 4> TextureUs { 0, 0.25, 0.75, 1 };
        std::array<float, 4> TextureVs { 0, 0.25, 0.75, 1 };
        std::array<float, 2> x15ec9181 { 0.25, 0.25 };
        std::array<float, 2> x1b57cc27 { 0.25, 0.25 };
    };
}
#define YORDLE_META_DEF_xab3d1567
#endif