/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcd391c99
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IOptionItemFilter.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcd391c99 : public IOptionItemFilter {
        explicit xcd391c99(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3443072153u || IOptionItemFilter::is_type(type);
        }

        bool ShowInLolGame = true;
        bool ShowInLolReplay = true;
        bool ShowInTftGame = true;
        bool ShowInTftReplay = true;
    };
}
#define YORDLE_META_DEF_xcd391c99
#endif
