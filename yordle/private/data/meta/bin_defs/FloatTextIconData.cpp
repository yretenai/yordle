/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FloatTextIconData.hpp>

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

yordle::data::meta::FloatTextIconData::FloatTextIconData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mIconFileName = prop->cast_prop<yordle::data::prop::string_prop>(273906444u);
    if(ptr_mIconFileName != nullptr) {
        mIconFileName = ptr_mIconFileName->value;
    }

    auto ptr_mColor = prop->cast_prop<yordle::data::prop::color_prop>(1399972751u);
    if(ptr_mColor != nullptr) {
        mColor = ptr_mColor->value;
    }

    auto ptr_mDisplaySize = prop->cast_prop<yordle::data::prop::point_prop>(3546641671u);
    if(ptr_mDisplaySize != nullptr) {
        mDisplaySize = ptr_mDisplaySize->value;
    }

    auto ptr_mOffset = prop->cast_prop<yordle::data::prop::point_prop>(651939147u);
    if(ptr_mOffset != nullptr) {
        mOffset = ptr_mOffset->value;
    }

    auto ptr_mAlignment = prop->cast_prop<yordle::data::prop::uint32_prop>(4041529037u);
    if(ptr_mAlignment != nullptr) {
        mAlignment = ptr_mAlignment->value;
    }
}
