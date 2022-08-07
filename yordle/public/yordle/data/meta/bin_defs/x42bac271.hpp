/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x42bac271
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x42bac271 : public bin_class {
        explicit x42bac271(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1119535729u;
        }

        std::string UiSound {};
        uint8_t xec63d209 = 5u;
        float xa766d8e5 = 255.0f;
        float xd316d9e6 = 1.0f;
        float x95b7cd25 = 1.0f;
        float x93553543 = 0.0f;
        float x9897aa6c = 3.0f;
        float xf48c0195 = 1.5f;
    };
}
#define YORDLE_META_DEF_x42bac271
#endif