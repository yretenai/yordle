/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xd0754dc9
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/xb3f7f3ed.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xb3f7f3ed
    struct xb3f7f3ed;
#endif
    struct YORDLE_EXPORT xd0754dc9 : public ViewController {
        explicit xd0754dc9(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3497348553u || ViewController::is_type(type);
        }

        float x5b9613f7 = 0.75f;
        float xf48b7975 = 1.5f;
        yordle::data::meta::bin_fnv_hash x4d302530 = 0u;
        yordle::data::meta::bin_fnv_hash x261b251 = 0u;
        yordle::data::meta::bin_fnv_hash x37b7e946 = 0u;
        yordle::data::meta::bin_fnv_hash xd23502b1 = 0u;
        yordle::data::meta::bin_fnv_hash xb587877d = 0u;
        yordle::data::meta::bin_fnv_hash x75366fc2 = 0u;
        yordle::data::meta::bin_fnv_hash x1cc88c1d = 0u;
        yordle::data::meta::bin_fnv_hash x985322b7 = 0u;
        yordle::data::meta::bin_fnv_hash xba47665c = 0u;
        float x1cac9ad1 = 20.0f;
        std::shared_ptr<yordle::data::meta::xb3f7f3ed> xb3f7f3ed {};
        std::string xe095d841 {};
    };
}
#define YORDLE_META_DEF_xd0754dc9
#endif
