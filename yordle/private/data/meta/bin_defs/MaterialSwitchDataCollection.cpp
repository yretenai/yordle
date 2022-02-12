/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/MaterialSwitchDataCollection.hpp>

#include <yordle/data/meta/bin_defs/IdMappingEntry.hpp>
#include <yordle/data/meta/bin_defs/MaterialSwitchData.hpp>
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

yordle::data::meta::MaterialSwitchDataCollection::MaterialSwitchDataCollection(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::bin_class(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_nextID = prop->cast_prop<yordle::data::prop::uint16_prop>(2874286421u);
    if(ptr_nextID != nullptr) {
        nextID = ptr_nextID->value;
    }

    auto ptr_Entries = prop->cast_prop<yordle::data::prop::map_prop>(1868071667u);
    if(ptr_Entries != nullptr) {
        for(const auto &set_Entries_pair : ptr_Entries->value) {
            auto ptr_Entries_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::string_prop>(set_Entries_pair.first);
            auto ptr_Entries_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_Entries_pair.second);
            if(ptr_Entries_key != nullptr && ptr_Entries_value != nullptr) {
                Entries.emplace(ptr_Entries_key->value, yordle::data::meta::deserialize<yordle::data::meta::IdMappingEntry>(ptr_Entries_value, 176045846u));
            }
        }
    }

    auto ptr_xea57bf12 = prop->cast_prop<yordle::data::prop::string_prop>(3931619090u);
    if(ptr_xea57bf12 != nullptr) {
        xea57bf12 = ptr_xea57bf12->value;
    }

    auto ptr_data = prop->cast_prop<yordle::data::prop::map_prop>(3631407781u);
    if(ptr_data != nullptr) {
        for(const auto &set_data_pair : ptr_data->value) {
            auto ptr_data_key = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::uint16_prop>(set_data_pair.first);
            auto ptr_data_value = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::inline_structure_prop>(set_data_pair.second);
            if(ptr_data_key != nullptr && ptr_data_value != nullptr) {
                data.emplace(ptr_data_key->value, yordle::data::meta::deserialize<yordle::data::meta::MaterialSwitchData>(ptr_data_value, 1327860340u));
            }
        }
    }
}