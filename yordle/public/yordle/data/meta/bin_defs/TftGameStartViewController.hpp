/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftGameStartViewController
#pragma once

#include <memory>
#include <string>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xd1fd3185.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xd1fd3185
    struct xd1fd3185;
#endif
    struct YORDLE_EXPORT TftGameStartViewController : public ViewController {
        explicit TftGameStartViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 334936068u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x81317ee6 = 0u;
        yordle::data::meta::bin_fnv_hash xfc59b058 = 0u;
        yordle::data::meta::bin_fnv_hash x1ef01e7 = 0u;
        yordle::data::meta::bin_fnv_hash x2ae32675 = 0u;
        yordle::data::meta::bin_fnv_hash x709d277e = 0u;
        yordle::data::meta::bin_fnv_hash x79c20682 = 0u;
        yordle::data::meta::bin_fnv_hash xf6a44ab6 = 0u;
        yordle::data::meta::bin_fnv_hash x60cff23b = 0u;
        yordle::data::meta::bin_fnv_hash xcdb026c3 = 0u;
        yordle::data::meta::bin_fnv_hash x1ad9fdf6 = 0u;
        std::string xc38bc99c {};
        std::map<uint32_t, std::shared_ptr<yordle::data::meta::xd1fd3185>> x939434dd {};
        float x56b85896 = 0.0f;
        float x14713b68 = 0.0f;
        float x87f66219 = 0.0f;
        float x3ffa2fd6 = 0.0f;
        float xdc2153fc = 0.0f;
    };
}
#define YORDLE_META_DEF_TftGameStartViewController
#endif
