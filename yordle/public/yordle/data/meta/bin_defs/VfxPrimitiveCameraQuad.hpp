/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_VfxPrimitiveCameraQuad
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/VfxPrimitiveBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT VfxPrimitiveCameraQuad : public VfxPrimitiveBase {
        explicit VfxPrimitiveCameraQuad(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2531114100u || VfxPrimitiveBase::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_VfxPrimitiveCameraQuad
#endif
