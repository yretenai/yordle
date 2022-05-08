/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_HudPingData
#pragma once

#include <memory>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT HudPingData : public bin_class {
        explicit HudPingData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3598370238u;
        }

        float distanceToNotTrollPingCorpses = 1000.0f;
        float timeToNotTrollPingCorpses = 10.0f;
    };
}
#define YORDLE_META_DEF_HudPingData
#endif
