/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x3604b3e3
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x3604b3e3 : public bin_class {
        explicit x3604b3e3(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 906277859u;
        }

        uint32_t x79dafa57 = 0u;
        float xae9687e = 0.0f;
    };
}
#define YORDLE_META_DEF_x3604b3e3
#endif
