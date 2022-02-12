/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/FxActionTimeDilate.hpp>

#include <yordle/data/meta/bin_defs/IFxAction.hpp>
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

yordle::data::meta::FxActionTimeDilate::FxActionTimeDilate(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::IFxAction(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_TimeDilation = prop->cast_prop<yordle::data::prop::float32_prop>(1080534638u);
    if(ptr_TimeDilation != nullptr) {
        TimeDilation = ptr_TimeDilation->value;
    }

    auto ptr_intime = prop->cast_prop<yordle::data::prop::float32_prop>(1040660087u);
    if(ptr_intime != nullptr) {
        intime = ptr_intime->value;
    }

    auto ptr_InEase = prop->cast_prop<yordle::data::prop::uint8_prop>(1626816708u);
    if(ptr_InEase != nullptr) {
        InEase = ptr_InEase->value;
    }

    auto ptr_OutTime = prop->cast_prop<yordle::data::prop::float32_prop>(2390841198u);
    if(ptr_OutTime != nullptr) {
        OutTime = ptr_OutTime->value;
    }

    auto ptr_OutEase = prop->cast_prop<yordle::data::prop::uint8_prop>(2383131965u);
    if(ptr_OutEase != nullptr) {
        OutEase = ptr_OutEase->value;
    }
}