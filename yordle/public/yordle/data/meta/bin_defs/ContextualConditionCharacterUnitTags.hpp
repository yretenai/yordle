/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualConditionCharacterUnitTags
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/ObjectTags.hpp>
#include <yordle/data/meta/bin_defs/ICharacterSubcondition.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_ObjectTags
    struct ObjectTags;
#endif
    struct YORDLE_EXPORT ContextualConditionCharacterUnitTags : public ICharacterSubcondition {
        explicit ContextualConditionCharacterUnitTags(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2711604381u || ICharacterSubcondition::is_type(type);
        }

        uint8_t mTagMode = 0u;
        std::shared_ptr<yordle::data::meta::ObjectTags> mUnitTags {};
    };
}
#define YORDLE_META_DEF_ContextualConditionCharacterUnitTags
#endif