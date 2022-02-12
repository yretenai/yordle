/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_AnchorSingle
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/AnchorBase.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT AnchorSingle : public AnchorBase {
        explicit AnchorSingle(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1396238320u || AnchorBase::is_type(type);
        }

        std::array<float, 2> Anchor { 0, 0 };
    };
}
#define YORDLE_META_DEF_AnchorSingle
#endif
