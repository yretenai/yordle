/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x7e19c23
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/MapCharacterList.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MapCharacterList
    struct MapCharacterList;
#endif
    struct YORDLE_EXPORT x7e19c23 : public bin_class {
        explicit x7e19c23(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 132226083u;
        }

        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::MapCharacterList>> characterLists {};
    };
}
#define YORDLE_META_DEF_x7e19c23
#endif
