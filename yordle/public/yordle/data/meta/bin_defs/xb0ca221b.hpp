/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb0ca221b
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb0ca221b : public bin_class {
        explicit xb0ca221b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2966037019u;
        }

        std::string x718f0085 {};
        std::string displayName {};
        std::string IconPath {};
        std::string description {};
    };
}
#define YORDLE_META_DEF_xb0ca221b
#endif
