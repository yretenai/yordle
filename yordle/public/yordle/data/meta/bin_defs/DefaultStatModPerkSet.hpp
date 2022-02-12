/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_DefaultStatModPerkSet
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/Perk.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_Perk
    struct Perk;
#endif
    struct YORDLE_EXPORT DefaultStatModPerkSet : public bin_class {
        explicit DefaultStatModPerkSet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3234822452u;
        }

        uint32_t mStyleId = 0u;
        std::vector<yordle::data::meta::bin_ref<yordle::data::meta::Perk>> mPerks {};
    };
}
#define YORDLE_META_DEF_DefaultStatModPerkSet
#endif
