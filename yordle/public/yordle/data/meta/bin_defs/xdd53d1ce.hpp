/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_xdd53d1ce
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/x1c494c09.hpp>
#include <yordle/data/meta/bin_defs/VfxSystemDefinitionData.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_x1c494c09
    struct x1c494c09;
#endif

#ifndef YORDLE_META_DEF_VfxSystemDefinitionData
    struct VfxSystemDefinitionData;
#endif
    struct YORDLE_EXPORT xdd53d1ce : public IFxAction {
        explicit xdd53d1ce(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3713257934u || IFxAction::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::x1c494c09> Location {};
        yordle::data::meta::bin_ref<yordle::data::meta::VfxSystemDefinitionData> Particle { 1171098015 };
        float x39d6e480 = 0.0f;
        bool x7436e01 = false;
        float Scale = 0.0f;
    };
}
#define YORDLE_META_DEF_xdd53d1ce
#endif