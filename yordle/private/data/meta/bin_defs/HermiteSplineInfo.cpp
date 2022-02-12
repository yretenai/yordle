/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/HermiteSplineInfo.hpp>

#include <yordle/data/meta/bin_defs/ISplineInfo.hpp>
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

yordle::data::meta::HermiteSplineInfo::HermiteSplineInfo(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ISplineInfo(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mControlPoint1 = prop->cast_prop<yordle::data::prop::vector_prop>(2818679128u);
    if(ptr_mControlPoint1 != nullptr) {
        mControlPoint1 = ptr_mControlPoint1->value;
    }

    auto ptr_mControlPoint2 = prop->cast_prop<yordle::data::prop::vector_prop>(2869011985u);
    if(ptr_mControlPoint2 != nullptr) {
        mControlPoint2 = ptr_mControlPoint2->value;
    }
}