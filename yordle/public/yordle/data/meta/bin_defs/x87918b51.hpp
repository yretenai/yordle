/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x87918b51
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/xb3e3401c.hpp>
#include <yordle/data/meta/bin_defs/HudMessageDisplayData.hpp>
#include <yordle/data/meta/bin_defs/ViewController.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_xb3e3401c
    struct xb3e3401c;
#endif

#ifndef YORDLE_META_DEF_HudMessageDisplayData
    struct HudMessageDisplayData;
#endif
    struct YORDLE_EXPORT x87918b51 : public ViewController {
        explicit x87918b51(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 2274462545u || ViewController::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash xf087db8 = 0u;
        std::shared_ptr<yordle::data::meta::xb3e3401c> x38db73ae {};
        std::shared_ptr<yordle::data::meta::HudMessageDisplayData> MessageDisplayData {};
        std::string xe095d841 {};
        bool x6341d93b = false;
    };
}
#define YORDLE_META_DEF_x87918b51
#endif