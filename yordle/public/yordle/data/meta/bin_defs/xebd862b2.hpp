/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xebd862b2
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xebd862b2 : public ViewController {
        explicit xebd862b2(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3956826802u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xbd81c797 = 0u;
        yordle::data::meta::bin_fnv_hash x1d33d52a = 0u;
        yordle::data::meta::bin_fnv_hash x12099849 = 0u;
        yordle::data::meta::bin_fnv_hash xe58b5931 = 0u;
        std::string xeac10e8a {};
        std::string x8b76c33f {};
    };
}
#define YORDLE_META_DEF_xebd862b2
#endif
