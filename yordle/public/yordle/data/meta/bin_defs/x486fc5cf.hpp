/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x486fc5cf
#pragma once

#include <memory>
#include <array>

#include <yordle/data/meta/bin_defs/xbce5fa3e.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xbce5fa3e
    struct xbce5fa3e;
#endif
    struct YORDLE_EXPORT x486fc5cf : public bin_class {
        explicit x486fc5cf(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1215284687u;
        }

        std::array<std::shared_ptr<yordle::data::meta::xbce5fa3e>, 5> x12f8b50b { nullptr, nullptr, nullptr, nullptr, nullptr };
    };
}
#define YORDLE_META_DEF_x486fc5cf
#endif