/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_BuffStackingTemplate
#pragma once

#include <memory>
#include <string>
#include <cstdint>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT BuffStackingTemplate : public bin_class {
        explicit BuffStackingTemplate(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 471801710u;
        }

        std::string name {};
        int32_t MaxStacks = 0;
        int32_t xb36eae8c = 0;
        bool StacksExclusive = false;
        uint32_t BuffAddType = 1u;
    };
}
#define YORDLE_META_DEF_BuffStackingTemplate
#endif
