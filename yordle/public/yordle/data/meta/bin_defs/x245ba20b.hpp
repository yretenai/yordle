/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x245ba20b
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x245ba20b : public bin_class {
        explicit x245ba20b(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 609985035u;
        }

        std::string name {};
        yordle::data::meta::bin_fnv_hash xcec577d1 = 0u;
    };
}
#define YORDLE_META_DEF_x245ba20b
#endif
