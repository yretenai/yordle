/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/RecallDecalData.hpp>

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

yordle::data::meta::RecallDecalData::RecallDecalData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_effectFile = prop->cast_prop<yordle::data::prop::string_prop>(493995746u);
    if(ptr_effectFile != nullptr) {
        effectFile = ptr_effectFile->value;
    }

    auto ptr_arrivalEffectFile = prop->cast_prop<yordle::data::prop::string_prop>(4290503505u);
    if(ptr_arrivalEffectFile != nullptr) {
        arrivalEffectFile = ptr_arrivalEffectFile->value;
    }

    auto ptr_EmpoweredEffectFile = prop->cast_prop<yordle::data::prop::string_prop>(3221725462u);
    if(ptr_EmpoweredEffectFile != nullptr) {
        EmpoweredEffectFile = ptr_EmpoweredEffectFile->value;
    }

    auto ptr_EmpoweredArrivalFile = prop->cast_prop<yordle::data::prop::string_prop>(2784775912u);
    if(ptr_EmpoweredArrivalFile != nullptr) {
        EmpoweredArrivalFile = ptr_EmpoweredArrivalFile->value;
    }

    auto ptr_recallDecalId = prop->cast_prop<yordle::data::prop::uint32_prop>(4226121696u);
    if(ptr_recallDecalId != nullptr) {
        recallDecalId = ptr_recallDecalId->value;
    }
}
