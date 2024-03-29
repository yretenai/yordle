/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_NotificationSettings
#pragma once

#include <memory>
#include <string>
#include <map>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT NotificationSettings : public bin_class {
        explicit NotificationSettings(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2610640435u;
        }

        std::string defaultSound {};
        std::map<uint8_t, std::string> x89667868 {};
    };
}
#define YORDLE_META_DEF_NotificationSettings
#endif
