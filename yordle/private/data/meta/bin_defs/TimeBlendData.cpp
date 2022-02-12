/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/TimeBlendData.hpp>

#include <yordle/data/meta/bin_defs/BaseBlendData.hpp>
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

yordle::data::meta::TimeBlendData::TimeBlendData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::BaseBlendData(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mTime = prop->cast_prop<yordle::data::prop::float32_prop>(2888110417u);
    if(ptr_mTime != nullptr) {
        mTime = ptr_mTime->value;
    }
}
