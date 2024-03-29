/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_ContextualActionPlayAnimation
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/IContextualAction.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT ContextualActionPlayAnimation : public IContextualAction {
        explicit ContextualActionPlayAnimation(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3095435268u || IContextualAction::is_type(type);
        }

        yordle::data::meta::bin_fnv_hash mHashedAnimationName = 0u;
        bool mPlayAsEmote = false;
    };
}
#define YORDLE_META_DEF_ContextualActionPlayAnimation
#endif
