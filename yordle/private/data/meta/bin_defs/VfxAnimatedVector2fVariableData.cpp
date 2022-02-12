/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/VfxAnimatedVector2fVariableData.hpp>

#include <yordle/data/meta/bin_defs/VfxProbabilityTableData.hpp>
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

yordle::data::meta::VfxAnimatedVector2fVariableData::VfxAnimatedVector2fVariableData(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_probabilityTables = prop->cast_prop<yordle::data::prop::set_prop>(2802337561u);
    if(ptr_probabilityTables != nullptr) {
        auto index_probabilityTables = 0;
        for(const auto &set_probabilityTables_entry : ptr_probabilityTables->value) {
            auto ptr_probabilityTables_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::structure_prop>(set_probabilityTables_entry);
            if(ptr_probabilityTables_entry != nullptr) {
                probabilityTables[index_probabilityTables] = yordle::data::meta::deserialize<yordle::data::meta::VfxProbabilityTableData>(ptr_probabilityTables_entry, 1403439486u);
            }
            index_probabilityTables++;
        }
    }

    auto ptr_times = prop->cast_prop<yordle::data::prop::set_prop>(1567157941u);
    if(ptr_times != nullptr) {
        for(const auto &set_times_entry : ptr_times->value) {
            auto ptr_times_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::float32_prop>(set_times_entry);
            if(ptr_times_entry != nullptr) {
                times.emplace_back(ptr_times_entry->value);
            }
        }
    }

    auto ptr_values = prop->cast_prop<yordle::data::prop::set_prop>(877087803u);
    if(ptr_values != nullptr) {
        for(const auto &set_values_entry : ptr_values->value) {
            auto ptr_values_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::point_prop>(set_values_entry);
            if(ptr_values_entry != nullptr) {
                values.emplace_back(ptr_values_entry->value);
            }
        }
    }
}