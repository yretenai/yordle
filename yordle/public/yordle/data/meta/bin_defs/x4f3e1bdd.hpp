/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x4f3e1bdd
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT x4f3e1bdd : public bin_class {
        explicit x4f3e1bdd(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1329470429u;
        }

        yordle::data::meta::bin_fnv_hash x718b900 = 0u;
        yordle::data::meta::bin_fnv_hash x10bce373 = 0u;
        yordle::data::meta::bin_fnv_hash x345fd852 = 0u;
    };
}
#define YORDLE_META_DEF_x4f3e1bdd
#endif
