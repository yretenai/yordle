/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x6a7b0838
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x6a7b0838 : public bin_class {
        explicit x6a7b0838(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1786447928u;
        }

        yordle::data::meta::bin_fnv_hash x43b27471 = 0u;
        std::string x837c983c {};
        std::string x4b989bcc {};
        std::string x5b98af56 {};
    };
}
#define YORDLE_META_DEF_x6a7b0838
#endif
