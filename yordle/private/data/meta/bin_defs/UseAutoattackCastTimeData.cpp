/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/UseAutoattackCastTimeData.hpp>

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

yordle::data::meta::UseAutoattackCastTimeData::UseAutoattackCastTimeData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_mAutoattackCastTimeCalculation = prop->cast_prop<yordle::data::prop::structure_prop>(1559208202u);
    if(ptr_mAutoattackCastTimeCalculation != nullptr) {
        mAutoattackCastTimeCalculation = yordle::data::meta::deserialize<yordle::data::meta::IGameCalculation>(ptr_mAutoattackCastTimeCalculation, 389493299u);
    }

    auto ptr_x862fbe94 = prop->cast_prop<yordle::data::prop::bool_prop>(2251275924u);
    if(ptr_x862fbe94 != nullptr) {
        x862fbe94 = ptr_x862fbe94->value;
    }
}
