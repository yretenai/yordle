/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/DrawablePositionLocator.hpp>

#include <yordle/data/meta/bin_class.hpp>
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

yordle::data::meta::DrawablePositionLocator::DrawablePositionLocator(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_basePosition = prop->cast_prop<yordle::data::prop::uint32_prop>(1659129451u);
    if(ptr_basePosition != nullptr) {
        basePosition = ptr_basePosition->value;
    }

    auto ptr_distanceOffset = prop->cast_prop<yordle::data::prop::float32_prop>(1895875429u);
    if(ptr_distanceOffset != nullptr) {
        distanceOffset = ptr_distanceOffset->value;
    }

    auto ptr_angleOffsetRadian = prop->cast_prop<yordle::data::prop::float32_prop>(1699656118u);
    if(ptr_angleOffsetRadian != nullptr) {
        angleOffsetRadian = ptr_angleOffsetRadian->value;
    }

    auto ptr_orientationType = prop->cast_prop<yordle::data::prop::uint32_prop>(1260641385u);
    if(ptr_orientationType != nullptr) {
        orientationType = ptr_orientationType->value;
    }
}
