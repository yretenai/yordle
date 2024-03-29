/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/SkinAudioProperties.hpp>

#include <yordle/data/meta/bin_defs/BankUnit.hpp>
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

yordle::data::meta::SkinAudioProperties::SkinAudioProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_tagEventList = prop->cast_prop<yordle::data::prop::set_prop>(3596332109u);
    if(ptr_tagEventList != nullptr) {
        for(const auto &set_tagEventList_entry : ptr_tagEventList->value) {
            auto ptr_tagEventList_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_tagEventList_entry);
            if(ptr_tagEventList_entry != nullptr) {
                tagEventList.emplace_back(ptr_tagEventList_entry->value);
            }
        }
    }

    auto ptr_bankUnits = prop->cast_prop<yordle::data::prop::unordered_set_prop>(4176650130u);
    if(ptr_bankUnits != nullptr) {
        for(const auto &set_bankUnits_entry : ptr_bankUnits->value) {
            auto ptr_bankUnits_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_bankUnits_entry);
            if(ptr_bankUnits_entry != nullptr) {
                bankUnits.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::BankUnit>(ptr_bankUnits_entry, 2755749141u));
            }
        }
    }
}
