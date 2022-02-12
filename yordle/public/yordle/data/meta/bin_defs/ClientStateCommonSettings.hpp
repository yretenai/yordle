/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ClientStateCommonSettings
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ClientStateCommonSettings : public bin_class {
        explicit ClientStateCommonSettings(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2643135015u;
        }

        uint32_t x5b40f8fd = 120u;
        uint32_t x6a9d87e7 = 25u;
        uint32_t xefe9214c = 300u;
    };
}
#define YORDLE_META_DEF_ClientStateCommonSettings
#endif
