/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xbe71189
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xbe71189 : public ViewController {
        explicit xbe71189(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 199692681u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        yordle::data::meta::bin_fnv_hash x7e1ec43 = 0u;
        yordle::data::meta::bin_fnv_hash x98f72e4c = 0u;
        std::string xeac10e8a {};
        std::string x8b76c33f {};
    };
}
#define YORDLE_META_DEF_xbe71189
#endif
