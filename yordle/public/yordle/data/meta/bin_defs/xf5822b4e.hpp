/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xf5822b4e
#pragma once

#include <memory>
#include <map>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xf5822b4e : public bin_class {
        explicit xf5822b4e(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4118948686u;
        }

        yordle::data::meta::bin_fnv_hash x4babd89d = 0u;
        std::map<uint32_t, std::string> x98ad7c8f {};
    };
}
#define YORDLE_META_DEF_xf5822b4e
#endif
