/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x474f1541
#pragma once

#include <memory>
#include <cstdint>

#include <yordle/data/meta/bin_defs/xdf3bdc62.hpp>
#include <yordle/data/meta/bin_defs/RegionElementData.hpp>
#include <yordle/data/meta/bin_defs/x560e6c39.hpp>
#include <yordle/data/meta/bin_defs/x89fa8d1c.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xdf3bdc62
    struct xdf3bdc62;
#endif

#ifndef YORDLE_META_DEF_RegionElementData
    struct RegionElementData;
#endif

#ifndef YORDLE_META_DEF_x560e6c39
    struct x560e6c39;
#endif
    struct YORDLE_EXPORT x474f1541 : public x89fa8d1c {
        explicit x474f1541(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1196365121u || x89fa8d1c::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::xdf3bdc62> DefaultState {};
        std::shared_ptr<yordle::data::meta::xdf3bdc62> SliderClickedState {};
        std::shared_ptr<yordle::data::meta::xdf3bdc62> x5b9cbd0 {};
        std::shared_ptr<yordle::data::meta::xdf3bdc62> xb4f0cbde {};
        yordle::data::meta::bin_ref<yordle::data::meta::RegionElementData> BarHitRegion { 1859523703 };
        yordle::data::meta::bin_ref<yordle::data::meta::RegionElementData> SliderHitRegion { 1859523703 };
        uint8_t Direction = 0u;
        std::shared_ptr<yordle::data::meta::x560e6c39> soundEvents {};
    };
}
#define YORDLE_META_DEF_x474f1541
#endif
