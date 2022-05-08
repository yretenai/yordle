/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_MissileSpecification
#pragma once

#include <memory>
#include <vector>

#include <yordle/data/meta/bin_defs/MissileMovementSpec.hpp>
#include <yordle/data/meta/bin_defs/MissileVisibilitySpec.hpp>
#include <yordle/data/meta/bin_defs/HeightSolverType.hpp>
#include <yordle/data/meta/bin_defs/VerticalFacingType.hpp>
#include <yordle/data/meta/bin_defs/MissileGroupSpawnerSpec.hpp>
#include <yordle/data/meta/bin_defs/MissileBehaviorSpec.hpp>
#include <yordle/data/meta/bin_class.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
#ifndef YORDLE_META_DEF_MissileMovementSpec
    struct MissileMovementSpec;
#endif

#ifndef YORDLE_META_DEF_MissileVisibilitySpec
    struct MissileVisibilitySpec;
#endif

#ifndef YORDLE_META_DEF_HeightSolverType
    struct HeightSolverType;
#endif

#ifndef YORDLE_META_DEF_VerticalFacingType
    struct VerticalFacingType;
#endif

#ifndef YORDLE_META_DEF_MissileGroupSpawnerSpec
    struct MissileGroupSpawnerSpec;
#endif

#ifndef YORDLE_META_DEF_MissileBehaviorSpec
    struct MissileBehaviorSpec;
#endif
    struct YORDLE_EXPORT MissileSpecification : public bin_class {
        explicit MissileSpecification(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3221008892u;
        }

        float mMissileWidth = 0.0f;
        std::shared_ptr<yordle::data::meta::MissileMovementSpec> movementComponent {};
        std::shared_ptr<yordle::data::meta::MissileVisibilitySpec> visibilityComponent {};
        std::shared_ptr<yordle::data::meta::HeightSolverType> heightSolver {};
        std::shared_ptr<yordle::data::meta::VerticalFacingType> verticalFacing {};
        std::vector<std::shared_ptr<yordle::data::meta::MissileGroupSpawnerSpec>> missileGroupSpawners {};
        std::vector<std::shared_ptr<yordle::data::meta::MissileBehaviorSpec>> behaviors {};
    };
}
#define YORDLE_META_DEF_MissileSpecification
#endif
