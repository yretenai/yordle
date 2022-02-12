/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/OverrideAttackTimeData.hpp>

#include <yordle/data/meta/bin_defs/IGameCalculation.hpp>
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

yordle::data::meta::OverrideAttackTimeData::OverrideAttackTimeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_x20991541 = prop->cast_prop<yordle::data::prop::structure_prop>(546903361u);
    if(ptr_x20991541 != nullptr) {
        x20991541 = yordle::data::meta::deserialize<yordle::data::meta::IGameCalculation>(ptr_x20991541, 389493299u);
    }

    auto ptr_mCastTimePercent = prop->cast_prop<yordle::data::prop::float32_prop>(2238351055u);
    if(ptr_mCastTimePercent != nullptr) {
        mCastTimePercent = ptr_mCastTimePercent->value;
    }

    auto ptr_x278d2a22 = prop->cast_prop<yordle::data::prop::bool_prop>(663562786u);
    if(ptr_x278d2a22 != nullptr) {
        x278d2a22 = ptr_x278d2a22->value;
    }
}
