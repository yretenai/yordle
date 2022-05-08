/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_TftTraitData
#pragma once

#include <memory>
#include <string>
#include <cstdint>
#include <vector>

#include <yordle/data/meta/bin_defs/xe132f2d0.hpp>
#include <yordle/data/meta/bin_defs/x18ee4f3b.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xe132f2d0
    struct xe132f2d0;
#endif

#ifndef YORDLE_META_DEF_x18ee4f3b
    struct x18ee4f3b;
#endif
    struct YORDLE_EXPORT TftTraitData : public bin_class {
        explicit TftTraitData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1871118919u;
        }

        std::string mName {};
        uint8_t x88730233 = 0u;
        std::vector<std::shared_ptr<yordle::data::meta::xe132f2d0>> x6f4cf34d {};
        std::vector<std::shared_ptr<yordle::data::meta::x18ee4f3b>> x93dd1f25 {};
        std::string mDisplayNameTra {};
        std::string mUnitSectionTra {};
        std::string mDescriptionNameTra {};
        std::vector<yordle::data::meta::bin_fnv_hash> xfaf78155 {};
        std::string mIconPath {};
    };
}
#define YORDLE_META_DEF_TftTraitData
#endif
