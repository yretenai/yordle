/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xad58e686
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/xd0217984.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xd0217984
    struct xd0217984;
#endif
    struct YORDLE_EXPORT xad58e686 : public bin_class {
        explicit xad58e686(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2908284550u;
        }

        std::shared_ptr<yordle::data::meta::xd0217984> x7146b6bc {};
        float fadeSpeed = 0.5f;
        float fadeAcceleration = 5.0f;
        float fadeHoldTime = 0.05000000074505806f;
    };
}
#define YORDLE_META_DEF_xad58e686
#endif