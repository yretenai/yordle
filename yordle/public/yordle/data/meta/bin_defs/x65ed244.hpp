/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_x65ed244
#pragma once

#include <memory>
#include <cstdint>
#include <string>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/Character.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x1c494c09
    struct x1c494c09;
#endif

#ifndef YORDLE_META_DEF_Character
    struct Character;
#endif
    struct YORDLE_EXPORT x65ed244 : public IFxAction {
        explicit x65ed244(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 106877508u || IFxAction::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x1c494c09> Location {};
        yordle::data::meta::bin_ref<yordle::data::meta::Character> Character { 2335876880 };
        uint32_t SkinID = 0u;
        uint32_t x64fe3d2f = 0u;
        uint8_t priority = 1u;
        std::string x6495fab8 {};
        std::string xd65e723c {};
    };
}
#define YORDLE_META_DEF_x65ed244
#endif