/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MapAudioDataProperties.hpp>

#include <yordle/data/meta/bin_defs/MapAudioDataProperties.hpp>
#include <yordle/data/meta/bin_defs/BankUnit.hpp>
#include <yordle/data/meta/bin_defs/FeatureAudioDataProperties.hpp>
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

yordle::data::meta::MapAudioDataProperties::MapAudioDataProperties(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_BaseData = prop->cast_prop<yordle::data::prop::reference_prop>(2231333056u);
    if(ptr_BaseData != nullptr) {
        BaseData = yordle::data::meta::bin_ref<yordle::data::meta::MapAudioDataProperties>(3010308524u, ptr_BaseData->value);
    }

    auto ptr_bankUnits = prop->cast_prop<yordle::data::prop::set_prop>(4176650130u);
    if(ptr_bankUnits != nullptr) {
        for(const auto &set_bankUnits_entry : ptr_bankUnits->value) {
            auto ptr_bankUnits_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_bankUnits_entry);
            if(ptr_bankUnits_entry != nullptr) {
                bankUnits.emplace_back(yordle::data::meta::deserialize<yordle::data::meta::BankUnit>(ptr_bankUnits_entry, 2755749141u));
            }
        }
    }

    auto ptr_features = prop->cast_prop<yordle::data::prop::set_prop>(1602454474u);
    if(ptr_features != nullptr) {
        for(const auto &set_features_entry : ptr_features->value) {
            auto ptr_features_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_features_entry);
            if(ptr_features_entry != nullptr) {
                features.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::FeatureAudioDataProperties>(4071981464u, ptr_features_entry->value));
            }
        }
    }
}