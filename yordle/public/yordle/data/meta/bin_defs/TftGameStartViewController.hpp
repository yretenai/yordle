/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftGameStartViewController
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT TftGameStartViewController : public ViewController {
        explicit TftGameStartViewController(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 334936068u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash x81317ee6 = 0u;
        yordle::data::meta::bin_fnv_hash xfc59b058 = 0u;
        yordle::data::meta::bin_fnv_hash xf6a44ab6 = 0u;
        float x56b85896 = 0.0;
        float x14713b68 = 0.0;
        float x87f66219 = 0.0;
    };
}
#define YORDLE_META_DEF_TftGameStartViewController
#endif
