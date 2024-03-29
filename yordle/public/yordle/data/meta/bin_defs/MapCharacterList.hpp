/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MapCharacterList
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/Character.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_Character
    struct Character;
#endif
    struct YORDLE_EXPORT MapCharacterList : public bin_class {
        explicit MapCharacterList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 199060396u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::Character>> Characters {};
    };
}
#define YORDLE_META_DEF_MapCharacterList
#endif
