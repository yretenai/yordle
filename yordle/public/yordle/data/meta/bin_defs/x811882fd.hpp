/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x811882fd
#pragma once

#include <memory>
#include <vector>
#include <string>

#include <yordle/data/meta/bin_defs/x30176f82.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x30176f82
    struct x30176f82;
#endif
    struct YORDLE_EXPORT x811882fd : public ViewController {
        explicit x811882fd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2165867261u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash Scene = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::x30176f82>> xf0e72c76 {};
        std::string xe095d841 {};
    };
}
#define YORDLE_META_DEF_x811882fd
#endif
