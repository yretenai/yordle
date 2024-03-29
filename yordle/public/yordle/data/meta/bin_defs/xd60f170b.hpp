/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd60f170b
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xd60f170b : public bin_class {
        explicit xd60f170b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3591313163u;
        }

        float radius = 325.0f;
        float xba744195 = 0.0f;
        float x47676523 = 900.0f;
        float xe4c18db4 = 0.0f;
        float x141bdb6 = 200.0f;
        std::string x53dd7e1a {};
        float xe403ebcc = 135.0f;
    };
}
#define YORDLE_META_DEF_xd60f170b
#endif
