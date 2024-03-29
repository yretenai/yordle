/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_SameTeamCastRequirement
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/ICastRequirement.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT SameTeamCastRequirement : public ICastRequirement {
        explicit SameTeamCastRequirement(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 1622554532u || ICastRequirement::is_type(type);
        }
    };
}
#define YORDLE_META_DEF_SameTeamCastRequirement
#endif
