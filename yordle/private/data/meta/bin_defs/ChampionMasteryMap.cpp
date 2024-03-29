/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/ChampionMasteryMap.hpp>

#include <yordle/data/meta/bin_defs/MasteryData.hpp>
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

yordle::data::meta::ChampionMasteryMap::ChampionMasteryMap(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_MasteryData = prop->cast_prop<yordle::data::prop::map_prop>(505623326u);
    if(ptr_MasteryData != nullptr) {
        for(const auto &set_MasteryData_pair : ptr_MasteryData->value) {
            auto ptr_MasteryData_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::int32_prop>(set_MasteryData_pair.first);
            auto ptr_MasteryData_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_MasteryData_pair.second);
            if(ptr_MasteryData_key != nullptr && ptr_MasteryData_value != nullptr) {
                MasteryData.emplace(ptr_MasteryData_key->value, yordle::data::meta::bin_ref<yordle::data::meta::MasteryData>(505623326u, ptr_MasteryData_value->value));
            }
        }
    }
}
