/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_GameModeChampionList
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT GameModeChampionList : public bin_class {
        explicit GameModeChampionList(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2322891183u;
        }

        std::vector<yordle::data::meta::bin_fnv_hash> mChampions {};
    };
}
#define YORDLE_META_DEF_GameModeChampionList
#endif
