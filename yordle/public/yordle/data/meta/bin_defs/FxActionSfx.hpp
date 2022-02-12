/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_FxActionSfx
#pragma once

#include <memory>
#include <string>

#include <yordle/data/meta/bin_defs/FxTransform.hpp>
#include <yordle/data/meta/bin_defs/IFxAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_FxTransform
    struct FxTransform;
#endif
    struct YORDLE_EXPORT FxActionSfx : public IFxAction {
        explicit FxActionSfx(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3588503832u || IFxAction::is_type(type);
        }

        std::shared_ptr<yordle::data::meta::FxTransform> position {};
        std::string EventName {};
    };
}
#define YORDLE_META_DEF_FxActionSfx
#endif
