/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_StatStoneEventToTrack
#pragma once

#include <memory>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/IStatStoneLogicDriver.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_IStatStoneLogicDriver
    struct IStatStoneLogicDriver;
#endif
    struct YORDLE_EXPORT StatStoneEventToTrack : public bin_class {
        explicit StatStoneEventToTrack(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 4146948500u;
        }

        uint32_t EventToTrack = 231u;
        std::vector<std::shared_ptr<yordle::data::meta::IStatStoneLogicDriver>> StatFilters {};
    };
}
#define YORDLE_META_DEF_StatStoneEventToTrack
#endif