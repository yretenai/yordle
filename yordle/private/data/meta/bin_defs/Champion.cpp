/// <auto-generated>
// THIS FILE IS AUTO GENERATED DO NOT EDIT
#include <yordle/data/meta/bin_defs/Champion.hpp>

#include <yordle/data/meta/bin_defs/ChampionItemRecommendations.hpp>
#include <yordle/data/meta/bin_defs/Character.hpp>
#include <yordle/data/meta/bin_defs/CatalogEntry.hpp>
#include <yordle/data/meta/bin_defs/WadFileDescriptor.hpp>
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

yordle::data::meta::Champion::Champion(const std::shared_ptr<yordle::data::prop::structure_prop> &prop) : yordle::data::meta::WadFileDescriptor(prop) {
    if(prop == nullptr) {
        return;
    }
    auto ptr_name = prop->cast_prop<yordle::data::prop::string_prop>(2369371622u);
    if(ptr_name != nullptr) {
        name = ptr_name->value;
    }

    auto ptr_statStoneSets = prop->cast_prop<yordle::data::prop::set_prop>(1668387205u);
    if(ptr_statStoneSets != nullptr) {
        for(const auto &set_statStoneSets_entry : ptr_statStoneSets->value) {
            auto ptr_statStoneSets_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::fnv_hash_prop>(set_statStoneSets_entry);
            if(ptr_statStoneSets_entry != nullptr) {
                statStoneSets.emplace_back(ptr_statStoneSets_entry->value);
            }
        }
    }

    auto ptr_mChampionItemRecommendations = prop->cast_prop<yordle::data::prop::inline_structure_prop>(1665628256u);
    if(ptr_mChampionItemRecommendations != nullptr) {
        mChampionItemRecommendations = yordle::data::meta::deserialize<yordle::data::meta::ChampionItemRecommendations>(ptr_mChampionItemRecommendations, 3337884263u);
    }

    auto ptr_additionalCharacters = prop->cast_prop<yordle::data::prop::set_prop>(3994493072u);
    if(ptr_additionalCharacters != nullptr) {
        for(const auto &set_additionalCharacters_entry : ptr_additionalCharacters->value) {
            auto ptr_additionalCharacters_entry = yordle::data::prop::empty_prop::cast_prop<yordle::data::prop::reference_prop>(set_additionalCharacters_entry);
            if(ptr_additionalCharacters_entry != nullptr) {
                additionalCharacters.emplace_back(yordle::data::meta::bin_ref<yordle::data::meta::Character>(2335876880u, ptr_additionalCharacters_entry->value));
            }
        }
    }

    auto ptr_fixedLoadScreenPosition = prop->cast_prop<yordle::data::prop::int8_prop>(3723573990u);
    if(ptr_fixedLoadScreenPosition != nullptr) {
        fixedLoadScreenPosition = ptr_fixedLoadScreenPosition->value;
    }

    auto ptr_xc7d8a053 = prop->cast_prop<yordle::data::prop::uint32_prop>(3352862803u);
    if(ptr_xc7d8a053 != nullptr) {
        xc7d8a053 = ptr_xc7d8a053->value;
    }

    auto ptr_CatalogEntry = prop->cast_prop<yordle::data::prop::inline_structure_prop>(607049692u);
    if(ptr_CatalogEntry != nullptr) {
        CatalogEntry = yordle::data::meta::deserialize<yordle::data::meta::CatalogEntry>(ptr_CatalogEntry, 607049692u);
    }
}
