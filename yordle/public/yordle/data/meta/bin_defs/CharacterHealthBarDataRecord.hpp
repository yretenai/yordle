/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CharacterHealthBarDataRecord
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CharacterHealthBarDataRecord : public bin_class {
        explicit CharacterHealthBarDataRecord(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 297212766u;
        }

        float hpPerTick = 0.0f;
        std::string attachToBone {};
        uint8_t unitHealthBarStyle = 0u;
        bool showWhileUntargetable = false;
        bool x9c5124c0 = true;
        uint32_t xe784dd2f = 0u;
        bool x66a7d70a = false;
        bool x8bdcfa04 = false;
        bool x7f0b706e = false;
    };
}
#define YORDLE_META_DEF_CharacterHealthBarDataRecord
#endif
