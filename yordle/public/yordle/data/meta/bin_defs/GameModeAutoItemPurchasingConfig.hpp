/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GameModeAutoItemPurchasingConfig
#pragma once

#include <memory>
#include <cstdint>
#include <string>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT GameModeAutoItemPurchasingConfig : public bin_class {
        explicit GameModeAutoItemPurchasingConfig(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1773891178u;
        }

        int32_t x19ef67a2 = 0;
        std::vector<std::string> xe34f62d0 {};
        std::vector<std::string> xc8adfdbc {};
        std::vector<std::string> x83f0cccd {};
        yordle::data::meta::bin_fnv_hash x14596d09 = 0u;
    };
}
#define YORDLE_META_DEF_GameModeAutoItemPurchasingConfig
#endif
