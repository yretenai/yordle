/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xb3f7f3ed
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT xb3f7f3ed : public bin_class {
        explicit xb3f7f3ed(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3019371501u;
        }

        yordle::data::meta::bin_fnv_hash x5a5a6042 = 0u;
        yordle::data::meta::bin_fnv_hash xead6c249 = 0u;
        yordle::data::meta::bin_fnv_hash xb8cd006a = 0u;
        yordle::data::meta::bin_fnv_hash x92b97241 = 0u;
        yordle::data::meta::bin_fnv_hash x4babd89d = 0u;
        std::string x9bb30e67 {};
        std::string xb6c9bff1 {};
    };
}
#define YORDLE_META_DEF_xb3f7f3ed
#endif