/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FollowTerrainHeightSolver.hpp>

#include <yordle/data/meta/bin_defs/HeightSolverType.hpp>
#include <yordle/data/prop/empty_prop.hpp>
#include <yordle/data/prop/inline_structure_prop.hpp>
#include <yordle/data/prop/map_prop.hpp>
#include <yordle/data/prop/optional_prop.hpp>
#include <yordle/data/prop/primitive_array_prop.hpp>
#include <yordle/data/prop/primitive_prop.hpp>
#include <yordle/data/prop/set_prop.hpp>
#include <yordle/data/prop/string_prop.hpp>
#include <yordle/data/prop/unordered_set_prop.hpp>
#include <yordle/data/prop/structure_prop.hpp>

yordle::data::meta::FollowTerrainHeightSolver::FollowTerrainHeightSolver(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::HeightSolverType(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mHeightOffset = prop->cast_prop<yordle::data::prop::float32_prop>(4160140816u);
    if(ptr_mHeightOffset != nullptr) {
        mHeightOffset = ptr_mHeightOffset->value;
    }

    auto ptr_mMaxSlope = prop->cast_prop<yordle::data::prop::float32_prop>(3821269113u);
    if(ptr_mMaxSlope != nullptr) {
        mMaxSlope = ptr_mMaxSlope->value;
    }
}
