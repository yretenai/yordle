/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MissileTriggerSpec
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/MissileTriggeredActionSpec.hpp>
#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MissileTriggeredActionSpec
    struct MissileTriggeredActionSpec;
#endif
    struct YORDLE_EXPORT MissileTriggerSpec : public MissileBehaviorSpec {
        explicit MissileTriggerSpec(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3362386950u || MissileBehaviorSpec::is_type(type);
        }

        std::vector<std::shared_ptr<yordle::data::meta::MissileTriggeredActionSpec>> mActions {};
    };
}
#define YORDLE_META_DEF_MissileTriggerSpec
#endif
