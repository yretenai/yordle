/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SpellDataValueVector
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/SpellDataValue.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_SpellDataValue
    struct SpellDataValue;
#endif
    struct YORDLE_EXPORT SpellDataValueVector : public bin_class {
        explicit SpellDataValueVector(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1798273677u;
        }

        std::vector<std::shared_ptr<yordle::data::meta::SpellDataValue>> SpellDataValues {};
    };
}
#define YORDLE_META_DEF_SpellDataValueVector
#endif
