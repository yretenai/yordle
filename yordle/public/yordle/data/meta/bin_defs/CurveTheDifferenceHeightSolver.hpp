/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#ifndef YORDLE_META_DEF_CurveTheDifferenceHeightSolver
#pragma once

#include <memory>

#include <yordle/data/meta/bin_defs/HeightSolverType.hpp>
#include <yordle/data/meta/bin_ref.hpp>
#include <yordle/data/prop/structure_prop.hpp>
#include <yordle/yordle_export.h>

namespace yordle::data::meta {
    struct YORDLE_EXPORT CurveTheDifferenceHeightSolver : public HeightSolverType {
        explicit CurveTheDifferenceHeightSolver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop);

        bool is_type(uint32_t type) override {
            return type == 3920264276u || HeightSolverType::is_type(type);
        }

        float mInitialTargetHeightOffset = 0.0;
    };
}
#define YORDLE_META_DEF_CurveTheDifferenceHeightSolver
#endif