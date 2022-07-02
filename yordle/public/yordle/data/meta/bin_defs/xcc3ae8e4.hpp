/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xcc3ae8e4
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xcc3ae8e4 : public bin_class {
        explicit xcc3ae8e4(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3426412772u;
        }

        uint32_t xff786d5a = 0u;
        float x94efa6a0 = 0.0f;
        float x5bbd27af = 0.0f;
        std::string x24cdeeb4 = "TFT_Drop_Hover";
        std::string x6cb9b89 = "TFT_Drop_Hover_End";
        std::string xadd98956 {};
    };
}
#define YORDLE_META_DEF_xcc3ae8e4
#endif
