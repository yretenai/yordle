/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapPathCurveSegment.hpp>

#include <yordle/data/meta/bin_defs/MapPathSegment.hpp>
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

yordle::data::meta::MapPathCurveSegment::MapPathCurveSegment(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::MapPathSegment(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_ControlPoint1 = prop->cast_prop<yordle::data::prop::vector_prop>(69564147u);
    if(ptr_ControlPoint1 != nullptr) {
        ControlPoint1 = ptr_ControlPoint1->value;
    }

    auto ptr_ControlPoint2 = prop->cast_prop<yordle::data::prop::vector_prop>(86341766u);
    if(ptr_ControlPoint2 != nullptr) {
        ControlPoint2 = ptr_ControlPoint2->value;
    }
}