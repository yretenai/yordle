//
// Created by Lilith on 2021-06-08.
//

#pragma once

#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::prop {
    class YORDLE_EXPORT empty_constructed_prop : public empty_prop {
    public:
        explicit empty_constructed_prop(dragon::Array<uint8_t> &buffer, uintptr_t &ptr, uint32_t key_hash, uint32_t name_hash) : empty_prop(buffer, ptr, key_hash), name(name_hash) {
        }

        uint32_t name;
    };
} // namespace yordle::data::prop
