/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/StatStoneSet.hpp>

#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_defs/StatStoneData.hpp>
#include <yordle/data/meta/bin_defs/ICatalogEntryOwner.hpp>
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

yordle::data::meta::StatStoneSet::StatStoneSet(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::ICatalogEntryOwner(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_CatalogEntry = prop->cast_prop<yordle::data::prop::inline_structure_prop>(607049692u);
    if(ptr_CatalogEntry != nullptr) {
        CatalogEntry = yordle::data::meta::deserialize<yordle::data::meta::CatalogEntry>(ptr_CatalogEntry, 607049692u);
    }

    auto ptr_statStones = prop->cast_prop<yordle::data::prop::set_prop>(3412566397u);
    if(ptr_statStones != nullptr) {
        for(const auto &set_statStones_entry : ptr_statStones->value) {
            auto ptr_statStones_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_statStones_entry);
            if(ptr_statStones_entry != nullptr) {
                statStones.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::StatStoneData>(3978526660u, ptr_statStones_entry->value));
            }
        }
    }
}