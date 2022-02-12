/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_X3DSharedConstantDef
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT X3DSharedConstantDef : public bin_class {
        explicit X3DSharedConstantDef(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 19256412u;
        }

        std::string name {};
        uint32_t type = 0u;
        uint32_t Count = 1u;
        int32_t x2d6871c0 = -1;
        bool SetManually = false;
        uint32_t PlatformMask = 0u;
    };
}
#define YORDLE_META_DEF_X3DSharedConstantDef
#endif