/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DragonUITunables
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
    struct YORDLE_EXPORT DragonUITunables : public bin_class {
        explicit DragonUITunables(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3440211024u;
        }

        uint8_t mSlots = 0u;
        std::vector<std::string> mDragonBaseNames {};
    };
}
#define YORDLE_META_DEF_DragonUITunables
#endif