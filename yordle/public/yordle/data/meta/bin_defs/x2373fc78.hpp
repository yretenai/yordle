/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x2373fc78
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/xa24429bf.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x2373fc78 : public xa24429bf {
        explicit x2373fc78(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 594803832u || xa24429bf::is_type(type);
        }

        std::string effectKey {};
        std::string boneName {};
    };
}
#define YORDLE_META_DEF_x2373fc78
#endif
