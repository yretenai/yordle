/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4bfe07eb
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4bfe07eb : public bin_class {
        explicit x4bfe07eb(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1274939371u;
        }

        yordle::data::meta::bin_fnv_hash x196dddee = 0u;
        std::string x637af4c6 {};
    };
}
#define YORDLE_META_DEF_x4bfe07eb
#endif